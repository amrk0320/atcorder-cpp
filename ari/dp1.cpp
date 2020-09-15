#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n, W;
  cin >> n >> W;
  vector<pair<int, int>> naps(n);
  for (int i = 0; i < n; i++){
    int w, v;
    cin >> w >> v;
    pair<int, int> nap(w, v);
    naps[i] = nap;
  }
  sort(naps.begin(), naps.end());
  vector<int> S(n);
  vector<int> SV(n);
  int i = 0;
  for (int i = 0; i < n; i++){
    int w = naps[i].first;
    int v = naps[i].second;
    if (i == 0) {
      S[i] = w;
      SV[i] = v;
    } else {
      S[i] = w + S[i-1];
      SV[i] = v + SV[i-1];
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++){
    if (W < S[i]) {
      break;
    }
    ans = max(SV[i], ans);
  }
  cout << ans << endl;
}