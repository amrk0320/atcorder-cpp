#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<pa> v(n);
  vector<int> e;
  ll ans = 0;
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    v.at(i) = make_pair(a,b);
    e.push_back(a);
    e.push_back(b);
  }
  sort(e.begin(), e.end());
  for (int i = 0; i < 2*n; i++){
    for (int j = i+1; j < 2*n; j++){
      int in, ex;
      in = e.at(i);
      ex = e.at(j);
      ll sum = 0;
      for (int i = 0; i < n; i++){
        int a, b;
        a = v.at(i).first;
        b = v.at(i).second;
        sum += b-a;
        sum += abs(in - a);
        sum += abs(ex - b);
      }
      if (ans == 0){
        ans = sum;
      } else {
        ans = min(ans, sum);
      }
    }
  }
  cout << ans << endl;
}
