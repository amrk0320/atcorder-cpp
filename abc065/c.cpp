#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const ll MOD = 1e9+7;

int main() {  
  ll n, m;
  cin >> n >> m;
  if (2 <= abs(n-m)){
    cout << 0 << endl;
    return 0;
  }
  ll a, b;
  if (1 == abs(n-m)){ 
    a = min(n, m);
    b = max(n, m);
    ll k = 1;
    for (ll i = 0; i < a; i++){
      k = (k*(i+1))%MOD;
    }
    a = k;
    b = (k*b)%MOD;
    cout << ((b%MOD)*(a%MOD))%MOD << endl;   
  } else {
    a = n;
    ll k = 1;
    for (ll i = 0; i < a; i++){
      k = (k*(i+1))%MOD;
    }
    a = k;
    b = k;
    cout << ((a%MOD)*(b%MOD)+(a%MOD)*(b%MOD))%MOD << endl;   
  }
}
