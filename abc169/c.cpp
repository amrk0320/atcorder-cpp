#include <bits/stdc++.h>
#include <math.h>

using namespace std;
 
int main() {
  long double a;
  long double b;
  long double ans;
  cin >> a >> b;
  long double i,d;
  d = modf(b, &i);
  ans += a*i;
  ans += a*d;
  cout << fixed << setprecision(0) << floor(ans) << endl;
}