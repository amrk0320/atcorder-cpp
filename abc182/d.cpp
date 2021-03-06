#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  vector<ll> s(n+1, 0);
  for (int i = 0; i < n; i++){
    s.at(i+1) = s.at(i) + a.at(i);
  }
  vector<ll> smax(n+1, 0);
  for (int i = 0; i < n; i++){
    smax.at(i+1) = max(smax.at(i), s.at(i+1));
  }
  ll now = 0;
  ll sai = 0;
  for (int i = 0; i < n; i++){
    sai = max(sai, now + smax.at(i+1));
    now += s.at(i+1);
  }
  cout << sai << endl;
}
