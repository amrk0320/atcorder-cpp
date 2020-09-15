#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++){
    string x, y;
    cin >> x >> y;
    int dp[x.size()+1][y.size()+1];
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < x.size(); i++){
      char c = x.at(i);
      for (int j = 0; j < y.size(); j++){
        char b = y.at(j);
        if (c == b) {
          dp[i+1][j+1] = dp[i][j] + 1;
        } else {
          dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
        }
      } 
    } 
    cout << dp[x.size()][y.size()] << endl;
  }
}