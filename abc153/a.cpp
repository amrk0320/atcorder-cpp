#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int h, a, q, r;
  cin >> h >> a;
  if (h < a) {
    cout << 1 << endl;
     return 0;
  }
  q = h/a;
  r = h%a;
  if (0 < r) {
    q += 1;
  }
  cout << q << endl;
}