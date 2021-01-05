#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

const ll INF = 1e10;

int main() {  
  int n;
  cin >> n;
  string t;
  cin >> t;
  string s;
  for (ll i = 0; i < 2*1e5; i++){
    s += "110";
  }
  if (s.find(t) != string::npos) {  
    if (t == "1") {
      cout << 2*INF << endl;
      return 0;
    } else if (t == "0" || t == "11" || t == "10"|| t == "110"){
      cout << INF << endl;
      return 0;
    } else {
      ll cnt = 0;
      for (int i = 0; i < n; i++){
        if (t.at(i) == '0') ++cnt;
      }
      if (t.at(n-1) == '0'){
        cout << INF - cnt + 1 << endl;
      } else {
        cout << INF - cnt<< endl;
      }
    }
  } else {
    cout << 0 << endl;
  }
}
