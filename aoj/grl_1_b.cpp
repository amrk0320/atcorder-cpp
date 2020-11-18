#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

struct Edge {
    int to; // 隣接頂点番号
    long long w; // 重み
    Edge(int to, int w) : to(to), w(w) {}
};

typedef vector<vector<Edge> > Graph;
const ll INF = 2LL << 60;

int main() {  
  int v, e, r;
  cin >> v >> e >> r;
  vector<ll> d(v, INF);
  Graph g(v);
  for (int i = 0; i < e; i++){
    int s, t, de;
    cin >> s >> t >> de;
    g[s].push_back(Edge(t, de));
  }
  d[r] = 0;
  for (int i = 0; i < v; i++){
    for (int j = 0; j < v; j++){
      if (d[j] == INF) continue;
      for (Edge ed: g[j]) {
        if (d[j] + ed.w < d[ed.to]){
          d[ed.to] = d[j] + ed.w;
          if (i == v-1){
            cout << "NEGATIVE CYCLE" << endl;   
            return 0;
          }
        }
      }
    }
  }
  for (int i = 0; i < v; i++){
    if (d[i] == INF){
      cout << "INF" << endl;     
    } else {
      cout << d[i] << endl;   
    }
  }
}
