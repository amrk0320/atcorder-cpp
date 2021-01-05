#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

vector<pa> v;
int  n;

bool c(ll mid){
  vector<ll> S;
  for(auto p: v){
    int h = p.first;
    int s = p.second;
    if (mid < h) {
      return false;
    }
    // ●秒以内に割らなければいけない
    S.push_back((mid-h)/s);
  }
  sort(S.begin(), S.end());
  int cnt = 0;
  for(auto sec: S){
    if (cnt <= sec) {
      ++cnt;
    } else {
      return false;
    }
  }
  return true;
}

int main() {  
  cin >> n;
  for (int i = 0; i < n; i++){
    int h,s;
    cin >> h >> s;
    v.push_back(make_pair(h, s));
  }
  ll lb = 1;
  ll ub = 1e9 + (n-1)*1e9;
  while(1 < ub - lb){
    ll mid = (lb + ub)/2;
    if (c(mid)){
      ub = mid;
    } else {
      lb = mid;
    }
  }
  cout << ub << endl;
}
