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
  int n, m;
  int ans = 0;
  map<int, int> child;
  cin >> n >> m;
  vector<int> a(m);
  vector<int> b(m);
  for (int i = 0; i < m; i++){
    int A, B;
    cin >> A >> B;
    a.at(i) = A-1;
    b.at(i) = B-1;
  }
  for (int i = 0; i < m; i++){
    UnionFind uf(n);
    for (int j = 0; j < m; j++){
      if (i == j) continue;
      uf.unite(a.at(j), b.at(j));
    }
    if (uf.size(0) != n) ans++;
  }
  cout << ans << endl;
}
