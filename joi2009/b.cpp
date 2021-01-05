#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

bool close(int mid, int k, vector<int> s){
  return k <= s.at(mid) ;
}

int main() {  
  int d, n, m;
  cin >> d >> n >> m;
  vector<int> s;
  s.push_back(0);
  for (int i = 0; i < n-1; i++){
    int num;
    cin >> num;
    s.push_back(num);
  }
  s.push_back(d);
  s.push_back(-1);
  sort(s.begin(), s.end());
  ll ans = 0;
  for (int i = 0; i < m; i++){
    int k;
    cin >> k;
    auto itr = lower_bound(s.begin(), s.end(), k);
    int index = itr - s.begin();
    ans += min(abs(s.at(index) - k), abs(s.at(index-1) - k));
  }
  cout << ans << endl;
}
