#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int n, k;
vector<double> avg;

bool c(int mid, vector<double> s){
  for (int i = k; i <= n ; i++){
    double avg = s.at(i)-s.at(i-k)/k;
    if (mid <= avg){
      return true;
    }
  }
  return false;
}

int main() {  
  cin >> n >> k;
  for (int i = 0; i < n; i++){
    double w, v;
    cin >> w >> v;
    avg.push_back(v/w);
  }
  sort(avg.begin(), avg.end());
  vector<double> s(n+1, 0);
  vector<double> heikin;
  for(auto num: avg){ cout << num << endl; }
  for (int i = 0; i < n; i++){
    s.at(i+1) = s.at(i) + avg.at(i);
  }
  for (int i = 0; i+k <= n; i++){
    heikin.push_back((s.at(k+i)-s.at(i))/k);
  }
  for(auto num: heikin){ cout << num << endl; }
  int lb, ub;
  lb = 1;
  ub = 1e6+1;
  while(1 < ub - lb){
    int mid = (lb + ub)/2;
    if (c(mid, s)){
      lb = mid;
    } else {
      ub = mid;
    }
  }
  cout << lb << endl;
}
