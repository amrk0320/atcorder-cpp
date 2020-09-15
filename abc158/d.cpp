#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int q;
  cin >> s >> q;
  bool rev = false;
  stack<string> st;
  queue<string> qu;
  for (int i = 0; i < q; i++){
    int t;
    cin >> t;
    if (t == 1) { rev = !rev;}
    if (t == 2) { 
      int f;
      cin >> f;
      string c;
      cin >> c;
      if (!rev) {
        if (1==f){
          st.push(c);
        } else {
          qu.push(c);
        }
      } else {
        if (1==f){
          qu.push(c);
        } else {
          st.push(c);
        }
      }
    }
  }
  if (!rev){
    while(!st.empty()) {
      cout << st.top();
      st.pop();
    }
    cout << s;
    while(!qu.empty()) {
      cout << qu.front();
      qu.pop();
    }
  } else {
    string f, l;
    while(!qu.empty()) {
      f += qu.front();
      qu.pop();
    }
    reverse(f.begin(), f.end());
    cout << f;
    reverse(s.begin(), s.end());
    cout << s;
    while(!st.empty()) {
      l += st.top();
      st.pop();
    }
    reverse(l.begin(), l.end());
    cout << l;
  }
}