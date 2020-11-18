#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  ll ans = 0;
  for (int i = 0; i < n; i++){
    if (i == 0) ans += k;
    else ans *= k-1;
  }
  cout << ans << endl;
}
