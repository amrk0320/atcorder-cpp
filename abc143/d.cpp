#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  vector<int> L(n);
  int ans = 0;
  for (int i = 0; i < n; i++){
    cin >> L.at(i);
  }
  sort(L.begin(), L.end());
  for (int i = n-1; 0 <= i; i--){
    for (int j = i - 1; 0 <= j; j--){
      int diff = L.at(i) - L.at(j);
      auto itr = upper_bound(L.begin(), L.end(), diff);
      int pat = itr - L.begin();
      if (pat < j){
        ans += j - pat;
      }
    }
  }
  cout << ans << endl;
}
