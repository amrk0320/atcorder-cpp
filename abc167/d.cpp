#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  int point = 1;
  ll k;
  cin >> n >> k;
  vector<int> v(n+1);
  map<int, int> m;
  bool ok = false;
  for (int i = 1; i <= n; i++){
    cin >> v.at(i);
  }
  ll loop = 0;
  int cur = 1;
  int fir, end = 0;
  int p = 0;
  for (int i = 1; i <= k; i++){
    m[cur]++;
    if (m[cur] == 2) {
      point = cur;
      break;
    }
    cur = v.at(cur);
  }
  cur = 1;
  for (int i = 1; i <= k; i++){
    cur = v.at(cur);
    if (cur == point ) {
      p++;
      if (p == 1) fir = i;
      if (p == 2) {
        end = i;
        loop = end -fir;
        break;
      }
    }
    if (i==k) {
      cout << cur << endl;
      return 0;
    }
  }
  cur = point;
  for (int i = 0; i < ((k-fir)%loop); i++){
    cur = v.at(cur);
  }
  cout << cur << endl;
}