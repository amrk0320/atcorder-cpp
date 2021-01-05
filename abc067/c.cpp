#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  vector<ll> s(n+1, 0);
  for (int i = 0; i < n; i++){
    s.at(i+1) = s.at(i) + a.at(i);
  }
  ll ans = 0;
  for (int i = 1; i < n; i++){
    ll x,y;
    x = y = 0;
    x = s.at(i);
    y = s.at(n) - x;
    if (i == 1) {
      ans = abs(x-y);
    } else {
      ans = min(ans, abs(x-y));
    }
  } 
  cout << ans << endl;
}
