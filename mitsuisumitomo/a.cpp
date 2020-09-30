#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  int maybe = n/1.08;
  for (int i = -5; i < 5; i++){
    int ans = maybe + i;
    if (floor(ans*1.08) == n) {
      cout << ans << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
}