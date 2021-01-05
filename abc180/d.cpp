#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

ll x, y;
ll a, b;

bool c(ll mid){
  ll st = x;
  ll k = 0;
  while(1){
    st *= a;
    if (st < y) {
      ++k;
    } else {
      break;
    }
  }
  if (mid <= k) return true;
  if (((y-st)/b + k) < mid){
    return true;
  } else {
    return false;
  }
}

int main() {  
  cin >> x >> y >> a >> b;
  ll lb = 0;
  ll ub = y;
  while(1 < ub - lb){
    ll mid = (lb + ub)/2;
    if (c(mid)){
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;
}
