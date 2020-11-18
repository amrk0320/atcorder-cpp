#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> pa;

int main() {  
  int n;
  cin >> n;
  vector<pa> cities;
  for (int i = 0; i < n; i++){
    double x, y;
    cin >> x >> y;
    cities.push_back(make_pair(x, y));
  }
  double ans = 0;
  double round = 0;
  vector<int> nums;
  for (int i = 0; i < n; i++){
    nums.push_back(i);
  }
  do {
    for (int i = 0; i < n-1; i++){
      int index = nums.at(i);
      int next = nums.at(i+1);
      double xi, yi, xj, yj;
      xi = cities.at(index).first;
      yi = cities.at(index).second;
      xj = cities.at(next).first;
      yj = cities.at(next).second;
      ans += sqrt(pow((xi-xj),2) +  pow((yi-yj),2));
    }
    ++round;
  } while (next_permutation(nums.begin(), nums.end()));



  cout << fixed << setprecision(7) << ans/round << endl;
}
