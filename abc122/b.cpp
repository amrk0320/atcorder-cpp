#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i <= s.size(); i++){
    for (int j = 0; j <= s.size()-i; j++){
      string sub = s.substr(i, j);
      for (int k = 0; k < sub.size(); k++){
        char c = sub[k];
        if (c == 'A' || c == 'C'|| c == 'G'||c == 'T') {
          if (k == sub.size()-1 && ans < sub.size()){
            ans = sub.size();
          }
        } else {
          break;
        }
      } 
    }
  }
  cout << ans << endl;
}
