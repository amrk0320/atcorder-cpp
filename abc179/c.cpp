#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  ll ans = 0;

  for (int c = 1; c < n; c++){
    int num = n-c;
    int l = sqrt(num);
    for( int i=1; i<=l; ++i ){
      if( num%i == 0 )
        if( num/i == i ) {
          ans++;
        } else {
          ans += 2;
        }
      }
  }
  cout << ans << endl;
}