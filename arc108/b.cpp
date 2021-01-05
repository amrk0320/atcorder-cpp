#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  string s;
  cin >> s;
  string now = "";
  int ans = 0;
  for (int i = 0; i < n; i++){
    now += s.at(i); 
    if (2 < now.size()) {
      if (now.substr(now.size()-3, 3) == "fox") {
        ++ans;
        now = now.substr(0, now.size()-3);
      }
    }
  } 
  cout << n - 3*ans << endl;
}


