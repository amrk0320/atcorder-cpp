#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans1, ans2, ans3, ans4, an1, an2;
  ans1 = ans2 = ans3 = ans4 = an1 = an2 = 1;
  ans1 = a*c;
  ans2 = a*d;
  ans3 = b*c;
  ans4 = b*d;
  an1 = max(ans1, ans2);
  an2 = max(ans3, ans4);
  cout << max(an1, an2) << endl;
}