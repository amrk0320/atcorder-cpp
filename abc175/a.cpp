#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  if (s == "RRR") {
    cout << 3 << endl;
    return 0;
  }
  if (s == "SRR") {
    cout << 2 << endl;
    return 0;
  }
  if (s == "RRS") {
    cout << 2 << endl;
    return 0;
  }
  if (s == "RSS") {
    cout << 1 << endl;
    return 0;
  }
  if (s == "SRS") {
    cout << 1 << endl;
    return 0;
  }
  if (s == "SSR") {
    cout << 1 << endl;
    return 0;
  }
  if (s == "RSR") {
    cout << 1 << endl;
    return 0;
  }
  cout << 0 << endl;
}