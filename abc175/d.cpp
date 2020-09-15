#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n, k;
  cin >> n >> k;
  map<int, ll> P;
  map<int, ll> C;
  for (int i = 1; i <= n; i++){
    cin >> P[i];
  }
  for (int i = 1; i <= n; i++){
    cin >> C[i];
  }
  ll ans = 0;
  ll oneSum = 0;
  const ll ZERO = 0;
  for (int i = 1; i <= n; i++){
    oneSum += C.at(i);
  }
  if (0 < oneSum) {
    ans += (k/n)*oneSum;
    ll m = 0;
    for (int i = 1; i <= n; i++){
      ll all = 0;
      ll now = 0;
      int next = P.at(i);
      for (int j = 0; j < (k%n); j++){
        now = max(C.at(next), ZERO);
        all = max(now, ZERO);
        next = P.at(next);
      }
      m = max(m, all);
    }
    ans += m;
    cout << ans << endl;
  } else {
    if (k <= n) {
      ll m = -1e18;
      for (int i = 1; i <= n; i++){
        ll all = -1e18;
        ll now = C.at(i);
        int next = P.at(i);
        for (int j = 1; j < k; j++){
          now = max(C.at(next), now);
          all = max(all, now);
          next = P.at(next);op
        }
        m = max(m, all);
      }
      ans += m;
      cout << ans << endl;
    } else {
      ll m = -1e18;
      for (int i = 1; i <= n; i++){
        ll all = -1e18;
        ll now = C.at(i);
        int next = P.at(i);
        for (int j = 1; j < n; j++){
          now = max(C.at(next), now);
          all = max(now, all);
          next = P.at(next);
        }
        m = max(m, all);
      }
      ans += m;
      cout << ans << endl;
    }
  }
}