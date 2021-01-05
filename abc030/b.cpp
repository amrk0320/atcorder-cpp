#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  double n, m;
  cin >> n >> m;
  if (12 <= n) n -= 12;
  double alpha = (360/12)*n+(360.0/(12.0*60.0))*m;
  double beta = (360/60)*m;
  double diff = abs(alpha - beta);
  cout << fixed << setprecision(4) << min(diff, 360.0 - diff) << endl;
}
