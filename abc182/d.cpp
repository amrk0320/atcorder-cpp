#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  ll sai = 0;
  ll now = 0;
  ll cursum = 0;
  for (int i = 0; i < n; i++){
    ll big = max(a.at(i), a.at(i)+cursum);
    sai = max(sai, now+big);
    cursum += a.at(i);
    now += cursum;
  } 
  cout << sai << endl;
}
