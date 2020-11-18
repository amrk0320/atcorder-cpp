#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MAX = 1e18;

int main() {
  int n;
  cin >> n;
  vector<ll> A(n);
  for (int i = 0; i < n; i++){
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());
  ll ans = 1;
  for (int i = 0; i < n; i++){
    if (A.at(i) == 0) {
      cout << 0 << endl;
      return 0;
    }
    if (MAX/A.at(i) < ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= A.at(i);
  }
  cout << ans << endl;
}
