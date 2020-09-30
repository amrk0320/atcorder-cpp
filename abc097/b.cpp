#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int x;
  cin >> x;
  vector<int> v;
  v.push_back(1);
  for (int i = 2; i <= 31; i++){
    int p = 2;
    while(1){
      int num = pow(i, p);
      if (num <= 1000) {
        v.push_back(num);
        p++;
      } else {
        break;
      }
    }
  }
  v.push_back(1001);
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++){
    if (x < v[i]){
      cout << v[i-1] << endl;
      return 0;
    }
  } 
}