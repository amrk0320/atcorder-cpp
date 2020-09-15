#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  int r, s, p;
  string T;
  map<int, bool> win;
  ll ans;
  ans = 0;
  cin >> n >> k;
  cin >> r >> s >> p;
  cin >> T;
  for (int i = 1; i <= T.size(); i++){
    char te;
    te = T[i-1];
    if (k < i && te == T[i-1-k]) {
      if (win[i-k] == false) {
        if (te == 'r') ans += p;
        if (te == 's') ans += r;
        if (te == 'p') ans += s;
        win[i] = true;
      } else {
        win[i] = false;
      }
    } else {
      if (te == 'r') ans += p;
      if (te == 's') ans += r;
      if (te == 'p') ans += s;
      win[i] = true;
    }
  }
  cout << ans << endl;
}