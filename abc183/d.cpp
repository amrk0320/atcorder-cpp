#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, w;
  cin >> n >> w;
  int max_t = 2*1e5+5;
  vector<ll> mizu(max_t, 0);
  for (int i = 0; i < n; i++){
    int s, t, pp;
    cin >> s >> t >> pp;
    mizu.at(s) += pp;
    mizu.at(t) -= pp;
  }
  vector<ll> s(max_t+1, 0);
  for (int i = 0; i < max_t; i++){
    s.at(i+1) = s.at(i) + mizu.at(i);
  }
  for (int i = 0; i < max_t; i++){
    if (w < s.at(i+1)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
