#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s;
  while(0 < s.size()) {
    char l = s[0];
    char r = s[s.size()-1];
    if (s.size() == 1){
      t += s;
      break;
    }
    if (l < r) {
      t += l;
      s =  s.substr(1, s.size()-1);
    } else if (r < l) {
      t += r;
      s =  s.substr(0, s.size()-1);
    } else {
      bool ok;
      int end = s.size()/2;
      for (int i = 0; i < end; i++){
        char l2 = s[0+i];
        char r2 = s[s.size()-1-i];
        if (l2 < r2) {
          t += l;
          s =  s.substr(1, s.size()-1);
          ok = true;
          break;
        } else if (r2 < l2) {
          t += r;
          s =  s.substr(0, s.size()-1);
          ok = true;
          break;
        }
      }
      if (!ok) {
        t += s;
        break;
      }
    }
  }
  cout << t << endl;
}