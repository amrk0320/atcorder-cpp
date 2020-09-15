#include <bits/stdc++.h>
using namespace std;

//5
//4 2 3 1 5

int main() {
  int n, ans;
  cin >> n;
  vector<int> a(n);
  vector<int> dp(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  ans = 0;
  for (int i = 0; i < n; i++){
    dp[i] = 1;
    for (int j = 0; j < i; j++){
      if (a.at(j) < a.at(i)) {
        dp[i] = max(dp[i], dp[j] + 1);
      }
    }
    ans = max(dp[i], ans);
  }
  cout << ans << endl;
}
