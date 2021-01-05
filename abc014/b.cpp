#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) cin >> a.at(i);
  for (int i = 0; i < n; ++i) {
      if (x & (1<<i)) { // 列挙に i が含まれるか
        sum += a.at(i);
      }
  }
  cout << sum << endl;
}