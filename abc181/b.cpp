#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  ll ans = 0;
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    ll s = (a+b);
    ll c = (b-a+1);
    s *= c;
    s /= 2;
    ans += s;
  }
  cout << ans << endl;
}
