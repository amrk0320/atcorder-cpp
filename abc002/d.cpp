#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<pa> v(m);
  for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    v.at(i) = make_pair(x,y);
  }
  int ans = 0;
  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<int> s;
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) {
          s.push_back(i+1);
        }
    }
    bool ok = true;
    for (int j = 0; j < (int)s.size(); j++){
      for (int k = j+1; k < (int)s.size(); k++){
        int x = s.at(j);
        int y = s.at(k);
        bool re = false;
        for (int t = 0; t < m; t++){
          int x1 = v.at(t).first;
          int y1 = v.at(t).second;
          if (x1 == x && y1 == y){
            re = true;
            break;
          } 
          if (x1 == y && y1 == x){
            re = true;
            break;
          }
        }
        if (!re) {
          ok = false;
          break;
        }
      }
    }
    if (ok) {
      ans = max(ans, (int)s.size());
    } 
  }
  cout << ans << endl;
}
