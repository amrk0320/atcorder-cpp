#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  ll ans = 0;
  map<ll, int> factors;
  ll end = sqrt(n);
  for (ll i = 2; i <= end; i++) {
    while (n % i == 0) {
      factors[i]++;
      n /= i;
    }
    if (n == 1) break;
  }
  if (n != 1) factors[n]++;
  for (auto p: factors){
    int cnt = p.second;
    int div = 1;
    while(div <= cnt){
      cnt -= div;
      div++;
      ans++;
    }
  }
  cout << ans << endl;
}