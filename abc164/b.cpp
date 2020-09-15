#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  bool taka = true;
  while(1){
    if(taka){
      c -= b;
      taka = false;
      if (c <= 0) {
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      a -= d;
      taka = true;
      if (a <= 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
}