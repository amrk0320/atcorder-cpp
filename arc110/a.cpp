#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}

int main() {  
  int n;
  cin >> n;
  ll ans = 2;
  for (int i = 2; i <= n; i++){
    ans = lcm(ans, i);
  }
  cout << ans + 1 << endl;
}
