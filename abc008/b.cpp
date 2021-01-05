#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  map<string, int> t;
  for (int i = 0; i < n; i++){
    string name;
    cin >> name;
    t[name]++;
  }
  int p = 0;;
  string name;
  for(auto m: t){ 
    if(p < m.second){
      p = m.second;
      name = m.first;
    }
  } 
  cout << name << endl;
}
