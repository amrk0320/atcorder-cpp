#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  map<string, bool> b;
  map<string, bool> m;
  for (int i = 0; i < n; i++){
    string s;
    cin >> s;
    if (s.at(0) == '!'){
      string h = s.substr(1, (int)s.size()-1);
      if (m[h]){
        cout << h << endl;
        return 0;
      } else{
        b[h] = true;
      }
    } else {
      if (b[s]){
        cout << s << endl;
        return 0;
      } else{
        m[s] = true;
      }
    }
  }
  cout << "satisfiable" << endl;
}
