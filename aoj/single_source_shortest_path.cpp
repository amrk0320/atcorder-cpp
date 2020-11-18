#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const ll INF = 1e10;

int main() {  
  int n, m, r;
  cin >> n >> m >> r;
  vector<ll> p(n, INF);
  vector<bool> used(n, false);
  vector<vector<pa> > g(n);
  for (int i = 0; i < m; i++){
    int s, t, d;
    cin >> s >> t >> d;
    g[s].push_back(make_pair(t, d));
  }
  p[r] = 0;
  for (int i = 0; i < n; i++){
    int min_v = -1;
    ll cost = INF;
    for (int v = 0; v < n; v++){
      if (!used[v] && p[v] < cost){
        min_v = v;
        cost = p[v];
      }
    }
    if (min_v == -1) break;
    for(pa e: g[min_v]){
      if (p[min_v] + e.second < p[e.first]){
        p[e.first] = p[min_v] + e.second;
      }
    }
    used[min_v] = true;
  }
  for (int i = 0; i < n; i++){
    if (p[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << p[i] << endl;
    }
  } 
}
