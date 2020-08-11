#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t min = 0;
  int n, k;
  cin >> n >> k;
  cin >> n;
  vector<int>  monsters(n);
  for (int i = 0; i < n; i++){
    cin >> monsters.at(i);
  }
  sort(monsters.begin(), monsters.end(), std::greater<int>() );
  if (n <= k){
    cout << 0 << endl;
    return 0;
  }
  for (int i = k; i < n; i++){
    min += monsters.at(i);
  }
  cout << min << endl;
}