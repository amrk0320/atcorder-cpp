#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int n, m;

bool c(int mid, vector<int> x){
  int left = 0;
  for (int i = 1; i < m; i++){
    int right = left+1;
    while  (right < n && x.at(right) - x.at(left) < mid) {
      right++;
    }
    if (right == n) return false;
    left = right;
  }
  return true;
}

int main() {  
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++){
    cin >> v.at(i);
  }
  sort(v.begin(), v.end());
  int lb, ub;
  lb = 0;
  ub = 1e9+1;
  while(1 < ub - lb){
    int mid = (lb + ub)/2;
    if (c(mid, v)){
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;
}
