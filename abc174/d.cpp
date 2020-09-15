#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string S;
  cin >> S;
  int w = 0;
  int r = 0;
  int ans = 0;
  for (int i = 0; i < n; i++){
    if (S.at(i) == 'R') {
      r++;
    } else {
      w++;
    }
  }
  if (w == 0 || r == 0) {
    cout << 0 << endl;
    return 0;
  }
  for (int i = 0; i < r; i++){
    if (S.at(i) == 'W') {ans++;}
  }
  cout << ans << endl;
}