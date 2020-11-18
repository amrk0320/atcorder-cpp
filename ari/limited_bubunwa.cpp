#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int MAX_M = 1e5;
 
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), m(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++){
    cin >> m.at(i);
  }
  int dp[MAX_M+1];
  memset(dp, -1, sizeof(dp));
  dp[0] = 0;
  for (int i = 0; i < n; i++){
    cout << "--" << endl;
    for (int j = 0; j <= k; j++){
      if (0 <= dp[j]){
        dp[j] = m.at(i);
      } else if (j < a.at(i) || dp[j - a.at(i)] <= 0) {
        dp[j] = -1;
      } else {
        dp[j] = dp[j - a.at(i)] - 1;
      }
      cout << dp[j] << endl;
    }
  }
  if (0 <= dp[k]) cout << "Yes" << endl;
  else cout << "No" << endl;
}