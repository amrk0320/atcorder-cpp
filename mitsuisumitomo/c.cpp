#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int x;
  cin >> x;
  vector<int> p{ 100, 101, 102, 103, 104, 105 };
  vector<int> m{ 1000000, 1000000, 1000000, 1000000, 1000000, 1000000 };
  int dp[7][x+1];
  memset(dp, -1, sizeof(dp));
  dp[0][0] = 0;
  for (int i = 0; i < 6; i++){
    for (int j = 0; j <= x; j++){
      if (0 <= dp[i][j]) {
        dp[i+1][j] = m.at(i);
      } else if (0 <= j-p.at(i) && 0 < dp[i+1][j-p.at(i)]) {
        dp[i+1][j] = dp[i+1][j-p.at(i)] - 1;
      } else {
        dp[i+1][j] = -1;
      }
    }
  }
  if (0 <= dp[6][x]) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}