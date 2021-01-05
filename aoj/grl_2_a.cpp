#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, pair<int, int> > edge;

// Union-Find
struct UnionFind {
    vector<int> par, siz;

    UnionFind(int n) : par(n, -1) , siz(n, 1) { }

    // 根を求める
    int root(int x) {
        if (par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    // x と y が同じグループに属するかどうか (根が一致するかどうか)
    bool issame(int x, int y) {
        return root(x) == root(y);
    }

    // x を含むグループと y を含むグループとを併合する
    bool unite(int x, int y) {
        x = root(x), y = root(y);
        if (x == y) return false; 
        if (siz[x] < siz[y]) swap(x, y);
        par[y] = x;
        siz[x] += siz[y];
        return true;
    }

    // x を含むグループのサイズ
    int size(int x) {
        return siz[root(x)];
    }
};

int main() {  
  int v, e;
  cin >> v >> e;
  vector<edge> E(e);
  for (int i = 0; i < e; i++){
    int s, t, w;
    cin >> s >> t >> w;
    E.at(i) = make_pair(w, make_pair(s,t));
  }
  sort(E.begin(), E.end());
  UnionFind uf(v);
  ll ans = 0;
  for (int i = 0; i < e; i++){
    edge ed = E.at(i);
    int w = ed.first;
    int s = ed.second.first;
    int t = ed.second.second;
    if (!uf.issame(s, t)) {
      uf.unite(s, t);
      ans += w;
    }
  }
  cout << ans << endl;
}
