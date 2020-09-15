#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pa;

const int INF = 10e8;

int n, m;
char made[101][101];

int bfs(pa s, pa g){
  int d[101][101];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      d[i][j] = INF;
    } 
  } 
  queue<pa> q;
  d[s.first][s.second] = 0;
  q.push(s);
  while(!q.empty()){
    pa f = q.front(); q.pop();
    int tate = f.first;
    int yoko = f.second;
    int moto = d[tate][yoko];
    if (made[tate][yoko] == 'G'){break;}
    // 縦
    for (int t = -1; t < 2; t++){
      int td = tate + t;
      if (0 <= td && td < n && made[td][yoko] != '#' && d[td][yoko] == INF) {
        d[td][yoko] = moto+1;
        pa michi = make_pair(td, yoko);
        q.push(michi);
      }
    } 
    // 横
    for (int l = -1; l < 2; l++){
      int ld= yoko + l;
      if (0 <= ld && ld < m && made[tate][ld] != '#' && d[tate][ld] == INF) {
        d[tate][ld] = moto+1;
        pa michi = make_pair(tate, ld);
        q.push(michi);
      }
    } 
  }
  return d[g.first][g.second];
}
 
int main() {
  cin >> n >> m;
  pa s, g;
  for (int i = 0; i < n; i++){
    string str;
    cin >> str;
    for (int j = 0; j < n; j++){
      made[i][j] = str[j];
      if (str[j] == 'S') {
        // 縦, 横
        s = make_pair(i, j);
      }
      if (str[j] == 'G') {
        // 縦, 横
        g = make_pair(i, j);
      }
    }
  }
  cout << bfs(s, g) << endl;
}