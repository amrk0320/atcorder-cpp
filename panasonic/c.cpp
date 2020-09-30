#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll sum1 = 4*a*b;
  ll val = (c-a-b);
  ll sum2 = val*val;
  if (0 < val && sum1 < sum2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
