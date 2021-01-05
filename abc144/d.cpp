#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const double pie = 3.141592;

int main() {  
  double a, b, x;
  cin >> a >> b >> x;
  double t = (a*a*b)/2.0;
  if (t == x){
    cout << fixed << setprecision(7) << 45.0000000000 << endl;
    return 0;
  }
  // 半分より上 
  if (t < x){
    double j = (2*(a*a*b-x))/(a*a);
    cout << fixed << setprecision(7) << atan2(j, b) * () << endl;
    return 0;
  // 半分より下
  } else {
    cout << fixed << setprecision(7) << 90.0 - 1.0/tan((x/(a*b))/b) << endl;
    return 0;
  }
}

