#include <bits/stdc++.h>
using namespace std;

// 4 4 
// abcd
// becd

int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  vector<vector<int>> dp(4, vector<int>(4));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (s[i] == t[j]) {
        dp[i+1][j+1] = dp[i][j] + 1; 
      } else {
        dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
      }
    } 
  }
  cout << dp[n][m] << endl;
}
