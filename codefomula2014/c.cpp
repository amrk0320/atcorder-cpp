#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  string s;
  getline(cin, s);
  vector<string> ans;
  for (int i = 0; i < (int)s.size()-1; i++){
    char m = s.at(i);
    if (m == '@'){
      string name = "";
      int cnt;
      for (int j = i+1; j < (int)s.size(); j++){
        cnt = j;
        char k = s.at(j);
        if (k == ' ' ) break;
        if (k == '@') {
          --cnt;
          break;
        }
        name += k;
      }
      ans.push_back(name);
      i = cnt;
    }
  }
  sort(ans.begin(), ans.end());
  ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
  for(string n: ans){ 
    if (n != ""){
      cout << n << endl; 
    }
  }
}
