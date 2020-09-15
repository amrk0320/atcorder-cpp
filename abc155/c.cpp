
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  typedef map<string, int> INTMAP;
  INTMAP myMap;
  for (int i = 0; i < n; i++){
    string str;
    cin >> str;
    myMap[str]++;
  }
  int max = 0;
  vector<string> v;
  for (auto p: myMap) {
    auto key = p.first;
    auto value =  p.second;
    if (max == 0) {
      max = value;
      v.push_back(key);
    } else {
      if (max < value) {
        vector<string> s;
        s.push_back(key);
        v = s;
        max = value;
      } else if (max == value) {
        v.push_back(key);
      }
    }
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++){
    cout << v[i] << endl;
  } 
}