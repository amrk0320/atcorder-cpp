#include <bits/stdc++.h>
using namespace std;
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
  for (int i = 0; i < n-1+m; i++){
    int v1, v2;
    cin >> v1 >> v2;
    G.at(v1-1).push_back(v2-1);
  }
  for (int i = 0; i < n; i++){
    if (seen.at(i)) {
      continue;
    }
    dfs(G, i);
  }
  reverse(ts.begin(), ts.end());
  for (int i = 0; i < n; i++){
    cout << ts.at(i)+1 << endl;
  } 
}