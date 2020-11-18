#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  char ch[8][8];
  for (int i = 0; i < n; i++){
    int r,c;
    cin >> r >> c;
    ch[r][c] = 'Q';
    for (int x = 0; x < 8; x++){
      if (x != r){
        ch[x][c] = 'X';
      }
    } 
    for (int y = 0; y < 8; y++){
      if (y != c){
        ch[r][y] = 'X';
      }
    }
  }

}
