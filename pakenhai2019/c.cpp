#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  ll ans = 0;
  ll p[n][m];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      cin >> p[i][j];
    }
  }
  for (int i = 0; i < m; i++){
    for (int j = i+1; j < m; j++){
      ll now = 0;
      for (int k = 0; k < n; k++){
        now += max(p[k][i], p[k][j]);
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
}
