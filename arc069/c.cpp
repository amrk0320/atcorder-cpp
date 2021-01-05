#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  ll n, m;
  cin >> n >> m;
  if (n <= m/2){
    cout << n + (m - 2*n)/4 << endl;
  } else {
    cout << m/2 << endl;
  }
}
