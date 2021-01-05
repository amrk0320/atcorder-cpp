#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<double, double> pa;

vector<pa> v;
int  n, k;

bool c(double mid){
  // 平均mid g が作れるかどうか
  vector<double> s;
  for(auto hs: v){ 
    double w = hs.first;
    double p = hs.second;
    s.push_back(w*(p-mid));
  }
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  double sum = 0;
  for (int i = 0; i < k; i++){
    sum += s.at(i);
  }
  return 0 <= sum;
}

int main() {  
  cin >> n >> k;
  for (int i = 0; i < n; i++){
    double w,p;
    cin >> w >> p;
    v.push_back(make_pair(w, p));
  }
  double lb = 0;
  double ub = 100;
  for (int i = 0; i < 100; i++){ 
    double mid = (lb + ub)/2;
    if (c(mid)){
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << fixed << setprecision(10)  << lb << endl;
}
