#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const ll INF = 1e18;

int main() {  
  int v, e;
  cin >> v >> e;
  ll d[v][v];
  for (int i = 0; i < v; i++){
    for (int j = 0; j < v; j++){
      if (i == j) {
        d[i][j] = 0;
      } else {
        d[i][j] = INF;
      }
    }
  }
  for (int i = 0; i < e; i++){
    int s, t, w;
    cin >> s >> t >> w;
    d[s][t] = w;
  }
  for (int i = 0; i < v; i++){
    for (int j = 0; j < v; j++){
      for (int k = 0; k < v; k++){
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
      }
    }
  }
  for (int i = 0; i < v; i++){
    if (d[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  } 
  for (int i = 0; i < v; i++){
    for (int j = 0; j < v; j++){
      if (j != 0) {
        cout << " ";
      }
      if (d[i][j] < INF/2) {
        cout << d[i][j];
      } else {
        cout << "INF";
      }
    }
    cout << endl;
  }
}
