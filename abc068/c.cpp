#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> n >> m;
  map<int, bool> a;
  map<int, bool> b;
  for (int i = 0; i < m; i++){
    int s, t;
    cin >> s >> t;
    if (s == 1){
      a[t] = true;
    }
    if (t == n){
      b[s] = true;
    }
  }
  for (int i = 0; i < n; i++){
    if (a[i+1] && b[i+1]){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  } 
  cout << "IMPOSSIBLE" << endl;
}
