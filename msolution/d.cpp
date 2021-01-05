#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i); 
  ll y = 1000;
  ll k = 0;
  for (ll i = 0; i < n-1; i++){
    ll t = a.at(i);
    ll s = a.at(i+1);
    if (t < s){
      ll buy = y/t;
      y -= t*buy;
      k += buy;

      y += k*s;
      k = 0;
    }
  } 
  cout << y << endl;
}
