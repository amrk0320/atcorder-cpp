#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n, W;
  cin >> n >> W;
  vector<int> w(n);
  vector<int> v(n);
  for (int i = 0; i < n; i++){
    cin >> w.at(i) >> v.at(i);
  } 
  int dp[n+1][W+1];
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i <= W; i++){ dp[0][i] = 0;} 

  for (int i = 0; i < n; i++){
    for (int j = 0; j < W; j++){
      if (0 <= j + 1 - w.at(i)){
        dp[i+1][j+1] = max(dp[i+1][j+1 - w.at(i)] + v.at(i), dp[i][j+1 - w.at(i)] + v.at(i));
      } else {
        dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
      }
    }
  }
  cout << dp[n][W]  << endl;
}