#include <iostream>
using namespace std;

int main() {
  int a = 1, n = 2, MOD = 1e9 + 7;
  for (int i = 0; i < n; i++) {
    a = (a * 2) % MOD;
  }
  cout << a << endl; // 976371285

  return 0;
}
