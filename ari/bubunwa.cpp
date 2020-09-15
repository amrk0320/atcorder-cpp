#include <bits/stdc++.h>
using namespace std;

bool dfs(stack<int> s, int sum){
  if (sum == 0) {
    return true;
  }
  if (s.size() == 0) {
    return false;
  }
  int t = s.top();s.pop();
  return dfs(s, sum) || dfs(s, sum-t); 
}
 
int main() {
  int n;
  cin >> n;
  stack<int> s;
  for (int i = 0; i < n; i++){
    int v;
    cin >> v;
    s.push(v);
  }
  int k;
  cin >> k;
  if (dfs(s, k)) cout << "Yes" << endl;
  else cout << "No" << endl;
}