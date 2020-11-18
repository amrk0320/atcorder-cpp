#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  vector<ll> b(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  for (int i = 0; i < n; i++){
    cin >> b.at(i);
  }
  vector<pa> e(m);
  for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    e.at(i) = make_pair(--x, --y);
  }

}
