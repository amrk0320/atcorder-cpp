#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++){
    if (i % 2 == 0) continue;
    int yaku = 0;
    for (int j = 1; j * j <= i; j++){
      if (i%j == 0) {
        int r = i/j;
        if (r == j) ++yaku;
        else yaku += 2;
      }
    }
    if (yaku == 8) {
      ++ans;
    }
  }
  cout << ans << endl;
}
