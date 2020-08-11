#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int64_t sum = 0;
  int h, n;
  cin >> h >> n;
  for (int i = 0; i < n; i++){
    int a;
    cin >> a;
    sum += a;
  }
  if (sum < h) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}