#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  int diff;
  int s1, s2;
  s1 = s2 = 0;
  for (int i = 0; i < n; i++){
    cin >> w.at(i);
    s2 += w.at(i);
  }
  for (int i = 1; i < n; i++){
    s1 += w.at(i-1);
    s2 -= w.at(i-1);
    int diff_now = abs(s1 - s2);
    if (i == 1) {
      diff = diff_now;
    } else {
      diff = min(diff, diff_now);
    }
  }
  cout << diff << endl;
}