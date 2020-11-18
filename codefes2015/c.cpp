#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> N(n);
  vector<int> M(m);
  for (int i = 0; i < n; i++){
    cin >> N.at(i);
  } 
  for (int i = 0; i < m; i++){
    cin >> M.at(i);
  }
  if (n < m){
    cout << "NO" << endl;
    return 0;
  }
  sort(N.begin(), N.end());
  sort(M.begin(), M.end());
  int j = 0;
  for (int i = 0; i < m; i++){
    if (n-1 < j){
        cout << "NO" << endl;
        return 0;
    }
    while(1){
      if (M.at(i) <= N.at(j)) break;
      ++j;
      if (n-1 < j){
        cout << "NO" << endl;
        return 0;
      }
    }
    ++j;
  }
  cout << "YES" << endl;
}
