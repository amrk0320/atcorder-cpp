#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vector<int> a(n+1);
  for (int i = 0; i < n-1; i++){
    if (s.substr(i,2) == "AC") a.at(i+2)++;
  } 
  vector<int> S(n+1);
  S[0] = 0;
  for (int i = 0; i < n; i++){
    S.at(i+1) = S.at(i) + a.at(i+1);
  } 
  for (int i = 0; i < q; i++){
    int l,r;
    cin >> l >> r;
    cout << S.at(r) - S.at(l) << endl;
  }   
}
