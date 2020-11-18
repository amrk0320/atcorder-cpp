#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, k;
  cin >> n >> k;
  int d[n+1][n+1];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> d[i+1][j+1];
    } 
  }
  int ans = 0;
  vector<int> nums;
  for (int i = 2; i <= n; i++){
    nums.push_back(i);
  }
  do {
    int sum = 0;
    int now = 1;
    for (int value : nums) {
        sum += d[now][value];
        now = value;
    }
    sum += d[now][1];
    if (sum == k) ++ans;
  } while (next_permutation(nums.begin(), nums.end()));
  cout << ans << endl;
}
