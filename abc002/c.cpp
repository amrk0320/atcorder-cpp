#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  double xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xb -= xa;
  yb -= ya;
  xc -= xa;
  yc -= ya;
  cout << fixed << setprecision(2) << abs(xb*yc-yb*xc)/2.0 << endl;  
}
