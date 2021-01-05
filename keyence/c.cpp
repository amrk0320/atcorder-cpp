#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> d(n);
  ll asum = 0;
  ll bsum = 0;
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
    asum += a.at(i);
  }
  bool ok = true;
  for (int i = 0; i < n; i++){
    cin >> b.at(i);
    bsum += b.at(i);
    if (a.at(i) < b.at(i)) ok = false;
    d.at(i) = a.at(i) - b.at(i);
  }
  if (ok) {
    cout << "0" << endl;
    return 0;
  }
  if (asum < bsum) {
    cout << "-1" << endl;
    return 0;
  }
  sort(d.begin(), d.end());
  int ans = 0;
  ll diff = 0;
  for (int i = 0; i < n; i++){
    if (d.at(i) < 0){
      ++ans;
      diff += abs(d.at(i));
    } else {
      break;
    }
  }
  for (int i = n-1; -1 < i; i--){
    diff -= d.at(i);
    ++ans;
    if (diff < 1){
      break;
    }
  }
  cout << ans << endl;
}
