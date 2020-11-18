#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> pa;
  for (int i = 0; i < n; i++){
    int num;
    cin >> num;
    pair<int, int> p = make_pair(i, num);
    pa.push_back(p);
  }
  sort(pa.begin(), pa.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });
  vector<int> res(n);
  int index = n/2-1;
  for (int i = 0; i < n; i++){
    if (i <= index){
      res.at(pa.at(i).first) = pa.at(index+1).second;
    } else {
      res.at(pa.at(i).first) = pa.at(index).second;
    } 
  }
  for (int i = 0; i < n; i++){
    cout << res.at(i) << endl;
  } 
}
