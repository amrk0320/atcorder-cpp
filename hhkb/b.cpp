#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int h, w;
  cin >> h >> w;
  int ans = 0;
  string back, now;
  for (int i = 0; i < h; i++){
    cin >> now;
    if (i == 0){
      for (int j = 1; j < w; j++){
        if (now.at(j) == '.' && now.at(j-1) == '.' ) {
          ans++;
        }
      }
      back = now;
    } else {
      for (int j = 1; j < w; j++){
        if (now.at(j) == '.' && now.at(j-1) == '.' ) {
          ans++;
        }
      }
      for (int j = 0; j < w; j++){
        if (now.at(j) == '.' && back.at(j) == '.' ) {
          ans++;
        }
      }
      back = now;
    }
  }
  cout << ans << endl;
}
