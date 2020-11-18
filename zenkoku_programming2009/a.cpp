#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){ 
    cin >> a.at(i); 
  }
  vector<ll> s(n+1, 0);
  for (int i = 0; i < n; i++){ 
    s[i+1] = s[i] + a[i];
   }
  for (int k = 1; k <= n; k++){
    ll ma = 0;
    for (int i = k; i <= n; i++){
      ma = max(ma, s[i] - s[i-k]);
    }
    cout << ma << endl;
  } 
}
