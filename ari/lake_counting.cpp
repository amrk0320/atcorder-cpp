#include <bits/stdc++.h>
using namespace std;

int n, m;
char niwa[101][101];

void dfs(int i, int j){
  niwa[i][j] = '.';
  for (int l = -1; l <= 1; l++){
    for (int t = -1; t <= 1; t++){
      int td = i+t;
      int ld = j+l;
      if (0 <= ld && 0 <= td && ld < m && td < n && niwa[td][ld] == 'W') {
        dfs(td, ld);
      }
    }
  }
  return;
}
 
int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++){
    string str;
    cin >> str;
    for (int j = 0; j < m; j++){
      char c = str[j];
      niwa[i][j] =c;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (niwa[i][j] == 'W') {
        dfs(i,j);
        ans++;
      }
    }
  } 
  cout << ans << endl;
}