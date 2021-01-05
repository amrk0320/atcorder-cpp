#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  for (int i = 0; i < m; i++){
    cin >> x.at(i);
  } 
  if (m <= n){
    cout << 0 << endl;
    return 0;
  }
  sort(x.begin(), x.end());
  vector<int> d;
  for (int i = 0; i < m-1; i++){
    d.push_back(abs(x.at(i)-x.at(i+1)));
  } 
  sort(d.begin(), d.end());
  ll sum = 0;
  for (int i = 0; i < m-n; i++){
    sum += d.at(i);
  } 
  cout << sum << endl;
}
