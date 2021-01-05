#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const ll INF = 1e10;

// なんでTLEになる？？

int main() {  
  int n, m, r;
  cin >> n >> m >> r;
  vector<ll> d(n, INF);
  vector<vector<pa> > g(n);
  for (int i = 0; i < m; i++){
    int s, t, d;
    cin >> s >> t >> d;
    g[s].push_back(make_pair(t, d));
  }
  d[r] = 0;
  // コスト、頂点をペアとしたヒープを作る
  // コストが最小の頂点が取得できる
  priority_queue<pair<ll, int>,
                   vector<pair<ll, int> >,
                   greater<pair<ll, int> > > q;
  q.push(make_pair(0, r));
  // 各辺 |V|
  while(0 < q.size()){
    int cost = q.top().first;
    int min_v = q.top().second;
    q.pop();
    if (d.at(min_v) < cost) continue;

    for(pa ed: g.at(min_v)){
      ll to = ed.first;
      ll w = ed.second;
      if (w + d[min_v] < d.at(to)) {
        d.at(to) = w + cost;
        q.push(make_pair(d.at(to), to));
      }
    }
  }
  for (int i = 0; i < n; i++){
    if (d[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << d[i] << endl;
    }
  }
}
