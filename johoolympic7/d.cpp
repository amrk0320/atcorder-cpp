#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> m;
  vector<pa> se(m);  
  for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    se.at(i) = make_pair(x, y);
  }
  cin >> n;
  vector<pa> hoshi(n);  
  for (int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    hoshi.at(i) = make_pair(x, y);
  }
  for (int i = 0; i < n; i++){
    int x, y;
    x = hoshi.at(i).first;
    y = hoshi.at(i).second;
    int a, b;
    a = se.at(0).first;
    b = se.at(0).second;
    for (int j = 1; j < m; j++){
      int z, q;
      bool ok = false;
      z = x + se.at(j).first - a;
      q = y + se.at(j).second - b;
      for (int k = 0; k < n; k++){
        if (hoshi.at(k).first == z && hoshi.at(k).second == q){
          ok = true;
          break;
        }
      }
      if (!ok){
        break;
      } else {
        if (j == m-1){
          cout << x - a << " " << y - b << endl;
          return 0;
        }
      }
    } 
  }
}
