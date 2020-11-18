#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const int INF = -1e8;

typedef vector<vector<int> > Graph;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<ll> p(n, 0);
  vector<bool> used(n, false);
  Graph g(n);
  for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    g[--x].push_back(--y);
  }
  p[0] = 0;
  for (int itr = 0; itr < n; itr++){
    for (int i = 0; i < n; i++){
      int max_v = -1;
      int cost = INF-1;
      for(int v: g[i]){
        if (!used[max_v] && cost < p[v]){
          max_v = v;
          cost = p[v];
        }
      }
      for(int v: g[max_v]){
        g[v]++;
      }
      used[max_v] = true;
    }
  }
  cout << d[n-1] << endl;
}
