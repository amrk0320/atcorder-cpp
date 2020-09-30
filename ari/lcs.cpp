#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int dp[n+1][m+1];
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i <= m; i++){dp[0][i] = 0;} 
  for (int i = 0; i < n; i++){
    dp[i][0] = 0;
    for (int j = 0; j < m; j++){
      if (s[i] == t[j]) {
        dp[i+1][j+1] = dp[i][j] + 1;
      } else {
        dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
      }
    }
  }
  cout << dp[n][m] << endl;
}