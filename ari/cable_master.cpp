#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, k;
  cin >> n >> k;
  vector<double> l(n);
  double sum = 0;
  double m = 0;
  for (int i = 0; i < n; i++){
    cin >> l.at(i);
    sum += l.at(i);
    if (m == 0){
      m = l.at(i);
    } else {
      m = min(m, l.at(i));
    }
  }
  double ans;
  for (int i = 1; i <= (int)m; i++){
    double len = i*k;
    if (len <= sum){
      ans = i;
    } else {
      break;
    }
  }
  cout << fixed << setprecision(2) << ans << endl;
}
