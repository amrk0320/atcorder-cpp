#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  char now = 'a';
  while(1){
    if (now == 'a') {
      if (a.size() == 0) {
        cout << 'A' << endl;
        return 0;
      }
      now = a.at(0);
      a.erase(0, 1);
    } else if (now == 'b') {
      if (b.size() == 0) {
        cout << 'B' << endl;
        return 0;
      }
      now = b.at(0);
      b.erase(0, 1);
    } else {
      if (c.size() == 0) {
        cout << 'C' << endl;
        return 0;
      }
      now = c.at(0);
      c.erase(0, 1);
    }
  }
}
