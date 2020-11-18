#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cut(vector<int> l, ll sum){
  if (l.size() == 1){
    return 0;
  } else if (l.size() == 2){
    return l[0] + l[1];
  } else {
    int r = 0;
    ll lsum ,rsum;
    lsum ,rsum = 0;
    ll left = 0;
    ll right = sum;
    for (int i = 0; i < l.size(); i++){
      left += l.at(i);
      right -= l.at(i);
      if (right == left){
        lsum ,rsum = left;
        r = i;
        break;
      } else if (right < left){
        if (right + l.at(i) < left) {
          r = i - 1;
          lsum = left - l.at(i);
          rsum = right + l.at(i);
        } else {
          r = i;
          lsum ,rsum = left;
        }
        break;
      }
    } 
    vector<int> le = std::vector<int>(l.begin(), l.begin() + r + 1);
    vector<int> ri = std::vector<int>(l.begin() + r + 1, l.end());
    return sum + cut(le, lsum) + cut(ri, rsum);
  }
}
 
int main() {
  int n;
  cin >> n;
  vector<int> l(n);
  ll sum = 0;
  for (int i = 0; i < n; i++){
    cin >> l.at(i);
    sum += l.at(i);
  }
  sort(l.begin(), l.end());
  ll cost = cut(l, sum);
  cout << cost << endl;
}
