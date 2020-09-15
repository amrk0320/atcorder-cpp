#include <bits/stdc++.h>
using namespace std;

bool sankaku(int x, int y, int z) {
  if (x == y || y == z || z == x ) {
    return false;
  }
  if (x + y > z && y + z > x && z + x > y ) {
    return true;
  }
  return false;
}
 
int main() {
  int n;
  cin >> n;
  if (n < 3) {
    cout << 0 << endl;
    return 0;
  }
  int count = 0;
  map<int, int> L;
  for (int i = 0; i < n; i++){
    int l;
    cin >> l;
    L[i] = l;
  }
  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      for (int k = j+1; k < n; k++){
        if (sankaku(L[i], L[j], L[k])) {
          count++;
        }
      }
    }
  } 
  cout << count << endl;
}