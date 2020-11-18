#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<pair<int, ll>> v;
  for (int i = 0; i < n; i++){
    ll num;
    cin >> num;
    v.push_back({i+1, num});
  }
  sort(v.begin(), v.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  }); 
  for (int i = n-1; 0 <= i; i--){
    cout << v.at(i).first << endl;
  }
}
