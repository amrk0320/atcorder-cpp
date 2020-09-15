#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, x;
  cin >> n >> m >> x;
  int books[n][m+1];
  for (int i = 0; i < n; i++){
    cin >> books[i][0];
    for (int j = 1; j <= m; j++){
      cin >> books[i][j];
    }
  }
  int ans =-1;
  for (int bit = 0; bit < (1<<n); ++bit) {
    vector<int> alg(m);
    int price = 0;
    for (int i = 0; i < n; ++i) {
      if (bit & (1<<i)) {
        price += books[i][0];
        for (int j = 0; j < m; j++){
          alg[j] = alg[j] + books[i][j+1];
        } 
      }
    }
    for (int j = 0; j < m; j++){
      if (alg[j] < x) {
        price = -1;
        break;
      }
    }
    if (price != -1) {
      if (ans == -1) {
        ans = price;
      } else {
        ans = min(ans, price);
      }
    }
  }
  cout << ans << endl;
}