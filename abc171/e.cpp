#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> a(n);
  int s;
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
    s ^= a.at(i);
  }
  for (int i = 0; i < n; i++){
    int ans = s^a.at(i);
    cout << ans << endl;
  }
}
