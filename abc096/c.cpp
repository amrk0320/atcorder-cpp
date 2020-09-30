#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;;

  if (a+b < 2*c) {
    cout << x*a + y*b<< endl;
  } else {
    if (x==y){
      cout << 2*c*x << endl;
    } else if(x < y){
      int total = 0;
      total = 2*c*x;
      int diff = y - x;
      total += min(diff*b, diff*c*2);
      cout << total << endl;
    } else {
      int total = 0;
      total = 2*c*y;
      int diff = x - y;
      total += min(diff*a, diff*c*2);
      cout << total << endl;
    }
  }
}