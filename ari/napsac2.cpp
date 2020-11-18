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
  int maxV = 100*100;
  int dp[n+1][maxV+1];
  int INF = 1e9;
  memset(dp, INF, sizeof(dp));
  for (int i = 0; i <= 100*100; i++){ dp[0][i] = 0; } 

  for (int i = 0; i < n; i++){
    for (int j = 0; j < maxV; j++){
      if (0 <= j + 1 - v.at(i)){
        dp[i+1][j+1] = min(dp[i][j + 1 - v.at(i)] + w.at(i), dp[i+1][j]);
      } else {
        dp[i+1][j+1] = dp[i+1][j];
      }
    }
  }
  int ans = 0;
  for (int i = 0; i <= maxV; i++){ 
    if (dp[n][i] <= W ) {
      ans = dp[n][i];
    }
  }
  cout << ans << endl;
}
