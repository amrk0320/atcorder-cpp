#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 10e8+7;

ll powmod(int x, ll y, ll mod){
  ll ans = 1;
  for (int i = 0; i < y; i++){
    ans = (ans * x) % mod;
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  ans = powmod(10, n, INF) + powmod(8, n, INF)- powmod(9, n, INF) - powmod(9, n, INF);
  ans %= INF;
  ans = (ans+INF)%INF;
  cout << ans << endl;
}