#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

struct Edge {
    int to; // 隣接頂点番号
    int w; // 重み
    Edge(int to, int w) : to(to), w(w) {}
};
const ll INF = -1e15;

typedef vector<vector<Edge> > Graph;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<ll> d(n, INF);
  Graph g(n);
  for (int i = 0; i < m; i++){
    int s, t, de;
    cin >> s >> t >> de;
    g[--s].push_back(Edge(--t, de));
  }
  d[0] = 0;
  for (int i = 0; i < n; i++){
    if (d[i] == INF) continue;
    for (int v = 0; v < n; v++){
      for(auto ed: g[v]){
        if (d[ed.to] < d[v] + ed.w) {
          d[ed.to] = d[v] + ed.w;
          if ( i == n-1 && ed.to == n-1){
            cout << "inf" << endl;
            return 0;
          } 
        }
      }
    }
  }
  cout << d[n-1] << endl;
}
