#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

void binary_search(int l, int r, int k, vector<int> a) {
  if (l < r){
    int mid = (l+r)/2;
    int t = a.at(mid);
    if (k <= t){
      if (mid == 0) {
        cout << mid << endl;
        return;
      }
      if (a.at(mid-1) < k){
        cout << mid << endl;
        return;
      } else {
        return binary_search(0, mid, k, a);
      }
    } else {
      return binary_search(mid+1, r, k, a);
    }
  } else {
    cout << (int)a.size() << endl;
    return;
  }
}

int main() {  
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  binary_search(0, n-1, k, a);
}
