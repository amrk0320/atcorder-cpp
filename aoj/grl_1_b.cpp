#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

struct edge {
    int from; // 隣接頂点番号
    int to; // 隣接頂点番号
    long long w; // 重み
};

const ll INF = 2LL << 60;

int main() {  
  int v, e, r;
  cin >> v >> e >> r;
  vector<ll> d(v, INF);
  vector<edge> es(e);
  for (int i = 0; i < e; i++){
    cin >> es[i].from >> es[i].to >> es[i].w;
  }
  d[r] = 0;
  for (int i = 0; i < v; i++){
    bool update = false;
    for(edge ed: es) {
      if (d[ed.from] == INF) continue;
      if (d[ed.from] + ed.w < d[ed.to]){
        d[ed.to] = d[ed.from] + ed.w;
        update = true;
        if (i == v-1){
          cout << "NEGATIVE CYCLE" << endl;   
          return 0;
        }
      }
    }
    if (!update) break;
  }
  for (int i = 0; i < v; i++){
    if (d[i] == INF){
      cout << "INF" << endl;     
    } else {
      cout << d[i] << endl;   
    }
  }
}
