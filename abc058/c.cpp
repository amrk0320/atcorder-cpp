#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  map<char, int> ma;
  for (int i = 0; i < n; i++){
    string s;
    cin >> s;
    map<char, int> now;
    for (int j = 0; j < (int)s.size(); j++){
      now[s.at(j)]++;
    }
    if (i == 0) {
      ma = now;
    } else {
      for(auto m: ma){
        char k = m.first;
        int v = m.second;
        ma[k] = min(now[k], v);
      }
    }
  }
  for(char moji='a'; moji<='z'; ++moji) {  
    for (int i = 0; i < ma[moji]; i++){
      cout << moji;
    } 
  }
  cout << endl;
}
