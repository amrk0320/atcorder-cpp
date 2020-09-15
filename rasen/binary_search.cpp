#include <bits/stdc++.h>
using namespace std;

int S[100000], n;

bool binary_search(int x) {
  int mid,left, right;
  left = 0;
  right = n;
  while(left < right){
    mid = (left+right)/2;
    if (S[mid] == x)
      return true;
    else if (S[mid] < x)
      left = mid+1;
    else if (x < S[mid])
      right = mid;
  }
  return false;
}

int main() {
  int q, ans;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> S[i];
  }
  cin >> q;
  for (int i = 0; i < q; i++){
    int x;
    cin >> x;
    if (binary_search(x))
      ans++;
  }
  cout << ans << endl;
}