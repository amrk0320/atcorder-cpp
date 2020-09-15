#include <bits/stdc++.h>
#include <math.h>

using namespace std;
 
int main() {
  double pi = 3.141592653589793238;
  double a,b, h, m;
  cin >> a >> b >> h >> m;
  double x, y;
  x = (360/12)*h;
  y = (360/60)*m;
  if (x == 0) x = 360;
  if (y == 0) y = 360;
  double plus = 0.5*m;
  x += plus;
  double diff = (double)(max(x,y) -  min(x,y));
  if (diff == 180) {
    cout << a + b << endl;
    return 0;
  } else if (180 < diff) {
    diff = 360 - diff;
  }
  double yogen = cos(diff / 180.0 * pi);
  double c = pow(a,2) + pow(b,2) - (2*a*b*yogen);
  double ans = sqrt(c);
  cout << fixed << setprecision(15) << ans << endl;
}
