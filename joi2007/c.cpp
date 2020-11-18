#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {
  int n;
  cin >> n;
  vector<pa> v(n);
  vector<vector<int> > g(5001);
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    v.at(i) = make_pair(a, b);
    g.at(a).push_back(b);
  }
  int ans = 0;
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      int x1, y1, x2, y2;
      int x3, y3, x4, y4;
      x1 = v.at(i).first;
      y1 = v.at(i).second;
      x2 = v.at(j).first;
      y2 = v.at(j).second;
      x3 = x1 - abs(y1 - y2);
      y3 = y1 + abs(x1 - x2);
      x4 = x2 - abs(y1 - y2);
      y4 = y2 + abs(x1 - x2);
      bool ok1, ok2;
      ok1 = ok2 = false;
      if (-1 < x3 && x3 < 5001){
        int size = (int)g.at(x3).size();
        for (int k = 0; k < size; k++){
          if (y3 == g.at(x3).at(k)){
            ok1 = true;
          }
        }
      }
      if (-1 < x4 && x4 < 5001){
        int size = (int)g.at(x4).size();
        for (int k = 0; k < size; k++){
          if (y4 == g.at(x4).at(k)){
            ok2 = true;
          }
        }
      }
      if (ok1 && ok2){
        int tate = (x2-x1);
        tate *= tate;
        int yoko = (y2-y1);
        yoko *= yoko;
        int s = tate+yoko;
        ans = max(s, ans);
      }
    }
  }
  cout << ans << endl;
}
