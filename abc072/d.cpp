#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> p(n);
  map<int, ll> m;
  for (int i = 0; i < n; i++){
    cin >> p.at(i);
  }
  ll s =0;
  for (int i = 0; i < n; i++){
    if (p.at(i) == i+1){
      if (i == n-1){
        swap(p.at(i), p.at(i-1));
        ++s;
        ++i;
        continue;
      } else {
        swap(p.at(i), p.at(i+1));
        ++s;
      }
    } 
  }
  cout << s << endl;
}
