#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll ans = 0;
  vector<int> r;
  vector<int> g;
  vector<int> b;
  for (int i = 0; i < n; i++){
    if ( s[i] == 'R' ) r.push_back(i);
    if ( s[i] == 'G' ) g.push_back(i);
    if ( s[i] == 'B' ) b.push_back(i);
  }
  ans += (r.size()*g.size()*b.size());
  for (int j = 0; j < n; j++){
    for (int i = 0; i < j; i++){
      int k = j + (j-i);
      if (k < n){
        if ( s[i] == s[j] ) continue;
        if ( s[j] == s[k] ) continue;
        if ( s[i] == s[k] ) continue;
        ans--;
      }
    }
  } 
  cout << ans << endl;
}