#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  string s;
  cin >> s;
  int n;
  cin >> n;
  map<string, int> ma;
  if ((int)s.size() < n) {
    cout << 0 << endl;
    return 0;
  } else {
    for (int i = 0; i < (int)s.size()-n+1; i++){
      string p = s.substr(i, n);
      ma[p]++;
    } 
  }
  int ans = 0;
  for(auto m: ma){ ++ans; }
  cout << ans << endl;
}
