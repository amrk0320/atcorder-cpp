#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++){
    cin >> v.at(i);
  }
  while(1){
    sort(v.begin(),v.end());
    if (v.at(0) == 1){
      cout << 1 << endl;
      return 0;
    }
    bool z = true;
    int d = v.at(0);
    for (int i = 1; i < n; i++){
      if (d == 0){
        d = v.at(i);
        continue;
      }
      v.at(i) %= d;
      if (v.at(i) != 0){
        z = false;
      }
    }
    if (z){
      cout << d << endl;
      return 0;
    }
  }
}
