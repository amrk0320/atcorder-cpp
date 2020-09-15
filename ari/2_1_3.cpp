#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, n;
  cin >> h >> n;
  vector<int> A(n);
  vector<int> B(n);
  for (int i = 0; i < n; i++){
    cin >> A.at(i);
    cin >> B.at(i);
  }
  const int INF = 100000;
  int dp[n+1][INF];
  for (int i = 0; i < n; i++){
    for (int b = 0; b < INF+1; b++){
      dp[i][b] = 1 << 29;
    } 
  }
  for (int i = 0; i < n; i++){ dp[n+1][0] = 0; } 
  int ans = 0;
  for (int i = 0; i < n; i++){
    for (int j = 1; j <= h; j++){
      dp[i+1][j] = min(dp[i+1][j], dp[i][j];
      if (j <= A.at(i)) {
        dp[i+1][j] = min(dp[i+1][j], dp[i][j + A.at(i)] + B.at(i));
      }
    }
  }
  for (int i = 0; i <= h; i++){
    cout << dp[1][i] << endl;
  }
}