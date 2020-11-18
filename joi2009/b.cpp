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
  vector<int> s(n+1);
  s.at(0) = 0;
  for (int i = 1; i < n-1; i++){
    cin >> s.at(i);
  }
  s.at(n) = d;
  sort(s.begin(), s.end());
  int lb, ub;
  ll ans = 0;
  for (int i = 0; i < m; i++){
    lb = 0;
    ub = n+1;
    int k;
    cin >> k;
    while(1 < ub-lb){
      int mid = (ub+lb)/2;
      if (close(mid, k, s)){
        lb = mid;
      } else {
        ub = mid;
      }
    }
    ans += min(abs(s.at(lb) - k), abs(s.at(lb+1) - k));
  }
  cout << ans << endl;
}
