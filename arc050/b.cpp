#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

ll r, b;
ll x, y;

bool c(ll mid){
  if (y/b < r/x){
    if (r/x < b){
      ll s = 0;
      
    } else {
      return mid <= r/x;
    }
  } else {

  }
  return true;
}

int main() {  
  cin >> r >> b;
  cin >> x >> y;
  ll lb = 0;
  ll ub = 1e18/2;
  while(1 < ub - lb){
    ll mid = (lb + ub)/2;
    if (c(mid, n)){
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;   
}
