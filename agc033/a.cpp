#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {
  int H, W;
  cin >> H >> W;
  char mass[H][W];
  int dist[H][W];
  queue<pa> q;
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> mass[i][j];
      if (mass[i][j] == '#'){
        q.push(make_pair(i,j));
      }
      dist[i][j] = 0;
    }
  }
  int ans = 0;
  while(!q.empty()){
    pa b = q.front();q.pop();
    int h,w;
    h = b.first;
    w = b.second;
    if (0 <= h-1 && mass[h-1][w] == '.') {
      mass[h-1][w] = '#';
      dist[h-1][w]= dist[h][w]+1;
      q.push(make_pair(h-1,w));
    }
    if (0 <= w-1 && mass[h][w-1] == '.') {
      mass[h][w-1] = '#';
      dist[h][w-1] = dist[h][w]+1;
      q.push(make_pair(h,w-1));
    }
    if (h+1 < H && mass[h+1][w] == '.') {
      mass[h+1][w] = '#';
      dist[h+1][w]= dist[h][w]+1;
      q.push(make_pair(h+1,w));
    }
    if (w+1 < W && mass[h][w+1] == '.'){
      mass[h][w+1] = '#';
      dist[h][w+1]= dist[h][w]+1;
      q.push(make_pair(h,w+1));
    } 
  }
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      ans = max(dist[i][j], ans);
    }
  }
  cout << ans << endl;
}
