#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  string t;
  cin >> t;
  int lcm =  n / __gcd(n, 3) * 3;
  string str;
  for (int i = 0; i < lcm/3; i++){
    str += "110";
  }
  int cnt = 0;
  for (int i = 0; i < lcm-(n-1); i++){
    if (str.substr(i, n) == t) ++cnt;
  }
  cout << 1e10/lcm*cnt << endl;
}
