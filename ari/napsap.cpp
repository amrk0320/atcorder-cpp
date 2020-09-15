#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, w;
  cin >> n >> w;
  int W[n];
  int V[n];
  for (int i = 0; i < n; i++){
    cin >> W[i] >> V[i];
  } 
  int dp[n+1][w+1];
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i <= w; i++){ dp[0][i] = 0; } 

  for (int i = 0; i < n; i++){
    for (int j = 0; j < w; j++){
      if (0 <= j+1 - W[i]) {
        dp[i+1][j+1] = max(dp[i][j+1 - W[i]] + V[i], dp[i][j+1]);
      } else {
        dp[i+1][j+1] = dp[i][j+1];
      }
    }
  } 
  cout << dp[n][w] << endl;
}