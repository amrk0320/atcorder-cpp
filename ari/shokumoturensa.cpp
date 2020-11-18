#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
  int n, k;
  cin >> n >> k;
  int ans = 0;
  UnionFind uf(3*n);
  for (int i = 0; i < k; i++){
    int p, x, y;
    cin >> p >> x >> y;
    if (x < 1 || 100 < x) {
      ans++;continue;
    }
    if (y < 1 || 100 < y) {
      ans++;continue;
    }
    --x;
    --y;
    if (p == 1) {
      // x - a == y - a
      // x - b == y - b
      // x - c == y - c
      if (uf.issame(x, y+n) || uf.issame(x, y+2*n)) {
        ans++;continue;
      } else {
        uf.unite(x, y);
        uf.unite(x+n, y+n);
        uf.unite(x+2*n, y+2*n);
      }
    } else {
      if (uf.issame(x, y) || uf.issame(y+2*n, x)) {
        ans++;continue;
      } else {
        uf.unite(x, y+n);
        uf.unite(x+n, y+2*n);
        uf.unite(x+2*n, y);
      }
    }
  }
  cout << ans << endl;
}
