#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  int sum = 0;
  for (int i = 0; i < n; i++){
    if (i == 0){
      sum += abs(0-a.at(i));
    } else {
      sum += abs(a.at(i)-a.at(i-1));
    }
  }
  sum += abs(0-a.at(n-1));
  for (int i = 0; i < n; i++){
    int ans = sum;
    if (i == 0){
      ans -= abs(0-a.at(i));
      ans -= abs(a.at(i+1)-a.at(i));
      ans += abs(a.at(i+1)-0);
    } else if (i < n-1) {
      ans -= abs(a.at(i)-a.at(i-1));
      ans -= abs(a.at(i+1)-a.at(i));
      ans += abs(a.at(i+1)-a.at(i-1));
    } else {
      ans -= abs(a.at(i)-a.at(i-1));
      ans -= abs(a.at(i)-0);
      ans += abs(a.at(i-1)-0);
    }
    cout << ans << endl;
  }
}
