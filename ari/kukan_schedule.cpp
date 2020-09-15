#include <bits/stdc++.h>
using namespace std;
typedef  pair<int, int> p;
 
int main() {
  int n;
  cin >> n;
  vector<p> W(n);
  for (int i = 0; i < n; i++){
    int l, r;
    cin >> l >> r;
    p w = make_pair(l, r);
    W[i] = w;
  }
  sort(W.begin(), W.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });
  int ans = 0;
  int index = -1;
  for (int i = 0; i < n; i++){
    if (index < 0) {
      ans++;
      index = 0;
    }
    if (W[index].second < W[i].first ) {
      ans++;
      index = i;
    }
  }
  cout << ans << endl;
}