#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;


const ll INF =1e18;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<ll> h(n);
  vector<ll> w(m);
  for (int i = 0; i < n; i++){
    cin >> h.at(i);
  }
  for (int i = 0; i < m; i++){
    cin >> w.at(i);
  }
  w.push_back(-INF);
  w.push_back(INF);
  sort(h.begin(), h.end());
  sort(w.begin(), w.end());
  vector<ll> s(n+1, 0);
  for (int i = 2; i <= n; i += 2){
    s.at(i) = s.at(i-2) + (h.at(i-1) - h.at(i-2));
  }
  for (int i = 3; i <= n; i += 2){
    s.at(i) = s.at(i-2) + (h.at(i-1) - h.at(i-2));
  }
  ll ans = 0;
  for (int i = 0; i < n; i++){
    if (i != n-1 && i+1%2 == 0) continue;
    ll chi = h.at(i);
    auto itr = lower_bound(w.begin(), w.end(), chi);
    int index = itr - w.begin();
    ll t = min(abs(chi- w.at(index)), abs(chi- w.at(index-1)));
    ll sum = t + s.at(i) + (s.at(n) - s.at(i+1));
    ans = min(ans, sum);
  } 
  cout << ans << endl;
}
