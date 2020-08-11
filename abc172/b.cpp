#include <bits/stdc++.h>
using namespace std;

int main() {
  int count = 0;
  string s, t;
  cin >> s >> t;
  if (s == t) {
    cout << 0 << endl;
    return 0;
  }
  for (int n = 0; n < s.size(); n++){
    if (s.at(n) != t.at(n)) {
      s.at(n) = t.at(n);
      count++;
    }
  }
  cout << count << endl;
}
