#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  while (cin >> n && cin >> x)
  {
    if (n == 0 && x == 0) return 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++){
      for (int j = i + 1; j <= n; j++){
        for (int k = j + 1; k <= n; k++){
          if ((i + j + k) == x) cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}
