#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double a = (gx*sy+gy*sx);
  double b = (sy+gy);
  cout << fixed << setprecision(10) << a/b << endl;
}
