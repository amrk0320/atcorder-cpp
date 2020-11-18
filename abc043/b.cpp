#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string S;
  stack<string> key;
  string ans = "";
  cin >> S;
  for (int i = 0; i < S.size(); i++){
    char s = S.at(i);
    if (s == 'B') {
      if (!key.empty()) {
        key.pop();
      }
    } else {
      key.push({s});
    }
  }
  while(!key.empty()){
    ans += key.top();
    key.pop();
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
