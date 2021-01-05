#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  double n, m;
  cin >> n >> m;
  int t = (n-m)*100+1900*m;
  int k = pow(2,m);
  cout << t*k << endl;  
}
