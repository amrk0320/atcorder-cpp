#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int price, oneCoins;
  map<int, int64_t> digit;
  for (int i = 0;; i++){
    int64_t v = 26;
    int a = 26;
    for (int j = 0; j < i; j++) v *= a;
    if (1000000000000001 < v) { break;};
    if (0 < i) { digit[i+1] = v + digit.at(i); } else { digit[i+1] = v; };
  }
  int n, d;
  cin >> n;
  for (int i = 0; i < digit.size(); i++){
    if (n < digit.at(i+1)) {
      d = i+1;
      break;
    }
  }
  string name = "";
  for (int i = 0; i < d; i++){
    int r = n%26;
    if (0 < r) {
      int q = n/26;
      char moji = 'a' + q;
      name += moji;
      n -= 26*q;
    } else {
      char moji = 'a' + n);
      name += moji;
    }
  } 
  cout << name << endl;
}

100%26 = 22
100/26 = 3 

26^1*3 + 26^0+22