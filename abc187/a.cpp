#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int a, b;
  cin >> a >> b;
  int s1, s2;
  s1 =  (a/100) + (a%100/10) +  (a%100%10);
  s2 =  (b/100) + (b%100/10) +  (b%100%10);
  if (s1 == s2){
    cout << s1 << endl;
    return 0;
  } else {
    cout << max(s1, s2) << endl;
    return 0;
  }
}
