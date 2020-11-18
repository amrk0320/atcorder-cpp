#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, l;
  cin >> n >> l;
  string ans = "";
  vector<string> L(n);
  for (int i = 0; i < n; i++){
    cin >> L.at(i);
  }
  sort(L.begin(), L.end());
  for (int i = 0; i < n; i++){
    ans += L.at(i);
  }
  cout << ans << endl;
}
