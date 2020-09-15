#include <bits/stdc++.h>
using namespace std;

int n, A[50];

bool solve(int m, int x) {
  if (x == 0)
    return true;
  if (n <= m)
    return false;
  return solve(m+1, x) || solve(m+1, x-A[m]);
}
 
int main() {
  int q;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> A[i];
  }
  cin >> q;
  for (int i = 0; i < q; i++){
    int m;
    cin >> m;
    if (solve(0, m))
      cout << "yes" << endl;
    else 
      cout << "no" << endl;
  } 
}