#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  double d;
  int ans = 0;
  cin >> n >> d;
  for (int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    double v = pow(x, 2) + pow(y, 2);
    double k = sqrt(v);
    if (k <= d) {
      ans++;
    }
  } 
  cout << ans << endl;
}