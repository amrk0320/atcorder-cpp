#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> pa;

int main() {  
  int n;
  cin >> n;
  vector<pa> v(n);
  for (int i = 0; i < n; i++){
    double a, b;
    cin >> a >> b;
    v.at(i) = make_pair(a, b);
  }
  sort(v.begin(), v.end());
  ll s = 0;
  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      double k = (v.at(j).second-v.at(i).second)/(v.at(j).first-v.at(i).first);
      if (-1.0 <= k && k <= 1.0){
        ++s;
      }   
    }
  }
  cout << s << endl;
}
