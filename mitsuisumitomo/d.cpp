#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ctoi(const char c){
  switch(c){
    case '0': return 0;
    case '1': return 1;
    case '2': return 2;
    case '3': return 3;
    case '4': return 4;
    case '5': return 5;
    case '6': return 6;
    case '7': return 7;
    case '8': return 8;
    case '9': return 9;
    default : return -1;
  }
}

string to_str(int num){
  std::ostringstream oss;
  oss << num;
  return oss.str();
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  ll ans = 0;
  for (int i = 0; i < 1000; i++){
    int c[3] = {i/100, i/10%10,i%10%10};
    int cnt = 0;
    for (int i = 0; i < n; i++){
      if (s[i] == (c[cnt] + '0')){
        ++cnt;
      }
      if (cnt == 3) break;
    }
    if (cnt == 3) ++ans;
  }
  cout << ans << endl;
}