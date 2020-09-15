#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = pow(10, 9) + 7;
int main() {
  int n, k;
  ll sum = 0;
  cin >> n >> k;
  for (int i = k; i <= n+1; ++i){
    ll min = i*(i-1)/2;
    ll max = (2*n-i+1)*i/2;
    ll diff = (max - min + 1);
    sum = (sum + diff)%MOD;
  } 
  cout << sum << endl;
}