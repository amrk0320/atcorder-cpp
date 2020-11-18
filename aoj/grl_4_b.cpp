#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<int> > Graph;
vector<bool> seen;
vector<int> ts;

void dfs(Graph g, int v){
  seen.at(v) = true;
  for (int next: g[v]){
    if (!seen.at(next)) {
      dfs(g, next);
    }
  }
  ts.push_back(v);
}

int main() {
  int n, m;
  cin >> n >> m;
  Graph G(n);
  seen.assign(n, false);
  for (int i = 0; i < m; i++){
    int v1, v2;
    cin >> v1 >> v2;
    G.at(v1).push_back(v2);
  }
  for (int i = 0; i < n; i++){
    if (seen.at(i)) {
      continue;
    }
    dfs(G, i);
  }
  for (int i = n-1; -1 < i; i--){
    cout << ts.at(i) << endl;
  }  
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<int>> Graph;

// トポロジカルソートする
vector<bool> seen;
vector<int> order; // トポロジカルソート順を表す

void rec(Graph G, int v) {
    seen[v] = true;
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; // すでに訪問済みなら探索しない
        rec(G, next_v);
    }

    // v-out を記録する
    order.push_back(v);
}

// int main() {
//     int N, M;
//     cin >> N >> M; // 頂点数と枝数
//     Graph G(N); // 頂点数 N のグラフ
//     for (int i = 0; i < M; ++i) {
//         int a, b;
//         cin >> a >> b;
//         G[a].push_back(b);
//     }

//     // 探索
//     seen.assign(N, false); // 初期状態では全頂点が未訪問
//     order.clear(); // トポロジカルソート順
//     for (int v = 0; v < N; ++v) {
//         if (seen[v]) continue; // すでに訪問済みなら探索しない
//         rec(G, v);
//     }
//     reverse(order.begin(), order.end()); // 逆順に

//     // 出力
//     for (auto v : order) {
//       cout << v << endl;
//     }
// }
