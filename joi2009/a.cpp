#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const int MOD = 1e5;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<int> d(n-1);
  vector<int> s(n, 0);
  vector<int> a(m);
  for (int i = 0; i < n-1; i++){
    cin >> d.at(i);
  }
  for (int i = 0; i < n-1; i++){
    s.at(i+1) = s.at(i) + d.at(i);
  }
  int now = 0;
  ll ans = 0;
  for (int i = 0; i < m; i++){
    int a;
    cin >> a;
    int diff = abs(s.at(a+now) - s.at(now));
    now += a;
    ans += diff%MOD;
  }
  cout << ans%MOD << endl;
}
