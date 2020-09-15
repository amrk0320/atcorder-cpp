#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, ma, mi, p, q;
  vector<int> nums;
  cin >> n;
  p = q = 0;
  for (int i = 1; i <= n; i++){
    nums.push_back(i);
  } 
  for (int i = n; 0 < i; i--){
    int num;
    cin >> num;
    p += pow(10, i-1)*num;
  }
  for (int i = n; 0 < i; i--){
    int num;
    cin >> num;
    q += pow(10, i-1)*num;
  }
  int cnt = 1;
  do {
    int val = 0;
    for (int i = 0; i < nums.size(); i++){
      val += pow(10, n-i-1)*nums[i];
    }
    if (p == val) a = cnt;
    if (q == val) b = cnt;
    cnt++;
  } while (next_permutation(nums.begin(), nums.end()));
  cout << abs(a-b) << endl;
}