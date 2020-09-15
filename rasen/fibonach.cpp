#include <bits/stdc++.h>
using namespace std;

int dp[45]; 

int fib(int n) {
  if (n == 0 || n == 1) return 1;
  if (dp[n] != -1) return dp[n];
  return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++) dp[i] = -1;
  dp[0] = dp[1] = 1;
  cout <<  fib(n) << endl;
}