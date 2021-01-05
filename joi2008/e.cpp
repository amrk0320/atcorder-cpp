#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int r, c;
  cin >> r >> c;
  bool sen[r][c];
  for (int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
      cin >> sen[i][j];
    }
  }
  ll ans = 0;
  for (int bit = 0; bit < (1<<r); ++bit) {
    bool pat[r][c];
    memcpy( pat, sen, sizeof(sen) );
    // n列目の裏数
    vector<int> v(c, 0);
    for (int i = 0; i < r; ++i) {
      // 行の裏返し
      for (int j = 0; j < c; j++){
        if (bit & (1<<i)) {
          pat[i][j] = !pat[i][j];
        }
        if (!pat[i][j]) ++v.at(j);
      }
    }
    ll ura = 0;
    for (int i = 0; i < c; i++){
      ura += max(v.at(i), r - v.at(i));
    }
    ans = max(ans, ura);
  }
  cout << ans << endl;
}
