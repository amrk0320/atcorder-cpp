#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  char s, t;
  cin >> s >> t;
  if (s == 'Y'){
    if (t == 'a') {
      cout << 'A' << endl;
    } else if (t == 'b') {
      cout << 'B' << endl;
    } else {
      cout << 'C' << endl;
    }
  } else {
    cout << t << endl;
  }
}
