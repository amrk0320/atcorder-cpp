#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxrem(int rem, int n){
  if (n == 0) return rem;
  if (0 == n%2){
    return maxrem(rem+1, n/2);
  } else {
    return rem;
  }
}

int main() {
  int n;
  cin >> n;
  int ma = 0;
  int ans = 0;
  for (int i = 0; i < n; i++){
    int num = maxrem(0, i+1);
    if (ma <= num){
      ma = num;
      ans = i+1;
    }
  }
  cout << ans << endl;
}