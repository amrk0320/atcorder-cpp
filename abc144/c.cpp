#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  vector<ll> f;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ll j = n / i;
      if (i == j) {
        if (ans == 0){
          ans = (i-1)*2;
        } else {
          ans = min(ans, (i-1)*2);
        }
      } else {
        if (ans == 0){
          ans = (i-1) + (j-1);
        } else {
          ans = min(ans, (i-1) + (j-1));
        }
      }
    }
  }
  cout << ans << endl;
}
