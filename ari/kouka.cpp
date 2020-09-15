#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  cin >> a;
  vector<int> c(6);
  for (int i = 0; i < 6; i++){
    cin >> c.at(i);
  }
  int sum = 0;
  for (int fh = c[5]; 0 <= fh; fh--){
    sum = a;
    if (0 <= sum - fh*500) sum -= fh*500;
    else if (0 < fh) continue;
    for (int h = c[4]; 0 <= h; h--){
      if (0 <= sum - h*100) sum -= h*100;
      else if (0 < h) continue;
      for (int fi = c[3]; 0 <= fi; fi--){
        if (0 <= sum - fi*50) sum -= fi*50;
        else if (0 < fi) continue;
        for (int t = c[2]; 0 <= t; t--){
          if (0 <= sum - t*10) sum -= t*10;
          else if (0 < t) continue;
          for (int f = c[1]; 0 <= f; f--){
            if (0 <= sum - f*5) sum -= f*5;
            else if (0 < f) continue;
            for (int o = c[0]; 0 <= o; o--){
              if (0 == (sum - o)) {
                return 0;
              }
            }
          }
        }
      }
    }
  } 
}