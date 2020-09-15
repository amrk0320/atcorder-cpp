#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, n, min, ans;
  map<int, bool> P;
  cin >> x >> n;
  if (n == 0){
    cout << x << endl;
    return 0;
  }
  for (int i = 0; i < n; i++){
    int p;
    cin >> p;
    P[p] = true;
  }
  min = x;
  ans = 0;
  for (int i = 1; i < 102; i++){
    if (P[i]) {
      continue;
    }
    int diff = abs(x-i);
    if (diff < min) {
      min = diff;
      ans = i;
    }
  }
  cout << ans << endl;
}