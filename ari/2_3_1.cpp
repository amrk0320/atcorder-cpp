#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n,W;
  cin >> n >> W;
  vector<int> v(n);
  vector<int> w(n);
  for (int i = 0; i < n; i++){
    cin >> v.at(i);
    cin >> w.at(i);
  }
  int dp[n+1][W+1];
  for (int i = 0; i <= W; i++){ dp[0][i] = 0;} 
  for (int i = 0; i < n; i++){ 
    for (int j = 0; j <= W; j++){
      // 選べる時、加算するので重さをチェックする
      if (w.at(i) <= j){ 
        dp[i+1][j] = max(dp[i][j], dp[i+1][j-w.at(i)] + v.at(i));
      } else {
        // 選ばない時、何も加算しない
        dp[i+1][j] = dp[i][j];
      }
    }
  }
  // n個までの品物を選んで重さがWを超えない価値の最大値
  cout << dp[n][W] << endl;
}