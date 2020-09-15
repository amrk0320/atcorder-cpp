#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, k, m, sum;
  sum = 0;
  cin >> n >> k >> m;
  for (int i = 0; i < n-1; i++){
    int a;
    cin >> a;
    sum += a;
  }
  if (n*m-sum <= k) {
    if (0 <(n*m-sum)){
      cout << n*m-sum << endl;
    } else{
      cout << 0 << endl;
    }
  } else {
    cout << -1 << endl;
  }
}