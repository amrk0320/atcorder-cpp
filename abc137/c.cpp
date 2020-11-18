#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  map<string, int> m;
  for (int i = 0; i < n; i++){
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    m[str]++;
  }
  ll ans = 0;
  for(auto k: m){
    ll cnt = k.second;
    if (1 < cnt){
      ans += (cnt*(cnt-1))/2;
    }
  }
  cout << ans << endl;
}
