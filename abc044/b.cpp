#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  map<char, int> pat;
  for (int i = 0; i < s.size(); i++){
    pat[s.at(i)]++;
  } 
  for (char i = 'a'; i <= 'z'; i++){
    if (pat.count(i)) {
      if (pat.at(i) %2 != 0 ) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
