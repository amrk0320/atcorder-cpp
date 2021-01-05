#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < (int)s.size(); i++){
    char a, b;
    a = s.at(i);  
    b = t.at(i);
    if (a == b) continue;
    if (a == '@'){
      if (b == 'a' || b == 't' || b == 'c' || b == 'o' ||b == 'r'||b == 'd'||b == 'e'){
        continue;
      }
    }
    if (b == '@'){
      if (a == 'a' || a == 't' || a == 'c' || a == 'o' ||a == 'r'||a == 'd'||a == 'e'){
        continue;
      }
    }
    cout << "You will lose" << endl;
    return 0;
  }
  cout << "You can win" << endl;
}
