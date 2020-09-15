#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
 int x;
 cin >> x;
 for (int i = 1; i < 1000; i++){
   ll a5 = 1;
   for (int j = 0; j < 5; j++){ a5 *= i;} 
  for (int t = -1000; t < 1000; t++){
    ll b5 = 1;
    for (int j = 0; j < 5; j++){ b5 *= t;} 
    if ((a5-b5) == x ){
      cout << i << " " << t << endl;
      return 0;
    }
  } 
 }
} 
