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
  vector<int> left(n, 0), right(n, 0);
  for (int i = 2; i < n; i+=2){
    left[i] = h.at(i-1) -h.at(i-2) + left[i-2];
    right[i] =  right[i-2] + h.at(n-i+1) - h.at(n-i);
  } 
  ll ans = INF;
  for(auto te: w){ 
    int i = lower_bound(h.begin(), h.end(), te) - h.begin();
    ll sum = 0;
    if ((i+1)%2 == 0){
      // 偶数
      sum = te - h.at(i-1)+ left[i-1] + right[n-i];
    } else {
      // 奇数
      sum = h.at(i) - te + left[i] + right[n-1-i];
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
