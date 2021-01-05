#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pa;

int main() {  
  int n;
  cin >> n;
  ll t = 0;
  ll s = 0;
  vector<ll> v(n);
  for (int i = 0; i < n; i++){
    ll a, b;
    cin >> a >> b;
    s += a;
    v.at(i) = 2*a+b;
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (int i = 0; i < n; i++){
    s -= v.at(i);
    if (s < 0){
      cout << i+1 << endl;
      return 0;
    }
  } 
}
