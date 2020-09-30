#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  string a, b;
  cin >> a >> b;
  int num = stoi(a+b);
  double r = floor(sqrt(num));
  if (r == num/r){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}