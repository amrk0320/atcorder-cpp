#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  for (int i = 0; i <= x; i++){
    int kame = x -i;
    int leg = i*2+kame*4;
    if (leg == y) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}