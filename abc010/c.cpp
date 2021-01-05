#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  double a1, a2, b1, b2, t, v;
  cin >> a1 >> a2 >> b1 >> b2 >> t >> v;
  int n;
  cin >> n;
  double ido = t*v;
  for (int i = 0; i < n; i++){
    double x, y;
    cin >> x >> y;
    double out = sqrt( (x-a1)*(x-a1) + (y-a2)*(y-a2)  ) + sqrt( (x-b1)*(x-b1) + (y-b2)*(y-b2)  );
    if (out <= ido){
      cout << "YES" << endl;
      return 0;
    }
  } 
  cout << "NO" << endl;
}
