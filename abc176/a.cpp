#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
  int n, x, t;
  cin >> n >> x >> t;
  if (n <= x) {
    cout << t << endl;
  } else {
    int ans =  t*(n/x);
    if (0 < (n%x)) {
      ans += t;
    } 
    cout << ans << endl;
  }
}