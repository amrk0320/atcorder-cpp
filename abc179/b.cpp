#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

 
int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    if (a == b) {
      cnt++;
      if (3 <= cnt ){
        cout << "Yes" << endl;
        return 0;
      }
    } else {
      cnt = 0;
    }
  }
  cout << "No" << endl;
}