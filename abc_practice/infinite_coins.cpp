#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int price, oneCoins;
  cin >> price >> oneCoins;

  if (price < oneCoins || price%500 == 0 || price%500 < oneCoins) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
