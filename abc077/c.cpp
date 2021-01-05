#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const ll INF = 1e18;

int main() {  
  int n;
  cin >> n;
  vector<ll> a(n+1);
  vector<ll> b(n+1);
  vector<ll> c(n+1);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++){
    cin >> b.at(i);
  }
  for (int i = 0; i < n; i++){
    cin >> c.at(i);
  }
  a.at(n) = INF;
  b.at(n) = INF;
  c.at(n) = INF;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  ll ans = 0;
  for (int j = 0; j < n; j++){
    int num = b.at(j);
    auto itr_a = lower_bound(a.begin(), a.end(), num);
    int i = itr_a - a.begin();
    auto itr_c = upper_bound(c.begin(), c.end(), num);
    int k = itr_c - c.begin();
    if (k == n) continue;
    ll high = i;
    ll low = n-k;
    ans += high*low;

  } 
  cout << ans << endl;
}
