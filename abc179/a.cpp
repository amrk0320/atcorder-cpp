#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

 
int main() {
  string s;
  cin >> s;
  if (s[s.size()-1] == 's'){
    cout << s + "es" << endl;   
  } else {
    cout << s + "s" << endl;   
  }
}