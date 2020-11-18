#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++){
    int num;
    cin >> num;
    int end = sqrt(num);
    for (int i = 2; i <= end; i++) {
      while (num % i == 0) {
        if (i%2 == 0) ans++;
        num /= i;
      }
      if (num == 1) break;
    }
    if (num != 1) {
      if (num % 2 == 0) ans++;
    }
  }
  cout << ans << endl;
}
