#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  int ans = 0;
  int minm = 0;
  for (int i = 0; i < n; i++){
    int p;
    cin >> p;
    if (i == 0) {
      ans++;
      minm = p;
    } else {
      minm = min(minm, p);
      if (minm == p) {
        ans++;;
      }
    }
  }
  cout << ans << endl;
}
