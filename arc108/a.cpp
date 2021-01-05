#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  ll s, p;
  cin >> s >> p;
  for (ll i = 1; i * i <= p; i++) {
    if (p % i == 0) {
      ll j = p / i;
      if (i == j) {
        if (i+j == s) {
          cout << "Yes" << endl;
          return 0;
        }
      } else {
        if (i+j == s) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}


