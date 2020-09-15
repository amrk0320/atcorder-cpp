#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int64_t X;
  ll k, d;
  cin >> X >> k >> d;
  int64_t x = abs(X);
  ll q = x/d;
  ll r = x%d;
  if (k < q) {
    x -= d*k;
    cout << x << endl;
  } else {
    ll last = k - q;
    if (last%2 == 0) {
      cout << r << endl;
    } else {
      int64_t v = abs(r-d);
      cout << v << endl;
    }
  }
}