#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int n, q;
int dp[20][2000];

int calc(vector<int> a, int i, int m){
  if (m == 0){
    return 1;
  }
  if (i == n){
    return 0;
  }
  if (-1 < dp[i][m]){
    return dp[i][m];
  }
  int res = max(calc(a, i+1, m-a.at(i)), calc(a, i+1, m));
  return dp[i][m] = res;
}

int main() {  
  cin >> n;
  vector<int> a(n);
  memset(dp, -1, sizeof(dp));
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  } 
  cin >> q;
  for (int j = 0; j < q; j++){
      int m;
      cin >> m;
      if (calc(a, 0, m) == 1){
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
  }
}
