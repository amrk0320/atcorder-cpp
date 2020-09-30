#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int ans;
  for (int i = 0; i < 5; i++){
    int n;
    cin >> n;
    if (n == 0) ans = i+1;
  } 
  cout << ans << endl;
}