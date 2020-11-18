#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<vector<int>> k(m);
  vector<int> p(m);
  for (int i = 0; i < m; i++){
    int d;
    cin >> d;
    for (int j = 0; j < d; j++){
      int s;
      cin >> s;
      k.at(i).push_back(--s);
    }
  } 
  for (int i = 0; i < m; i++){
    cin >> p.at(i);
  }
  int ans = 0;
  for (int bit = 0; bit < (1<<n); ++bit) {
    int okd = 0;
    for (int d = 0; d < m; d++){
      int ons = 0;
      for (int s = 0; s < (int)k.at(d).size(); s++){
        int on = k.at(d).at(s);
        if (bit & (1<<on)) { // 列挙に i が含まれるか
          ++ons;
        }
      }
      if (ons%2 == p.at(d)) ++okd;
    }
    if (okd == m) ++ans;
  }
  cout << ans << endl;
}
