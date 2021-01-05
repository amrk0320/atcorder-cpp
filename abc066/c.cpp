#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  deque<int> d;
  bool order = true;
  for (int i = 0; i < n; i++){
    int a;
    cin >> a;
    if (order){
      d.push_back(a);
    } else {
      d.push_front(a);
    }
    order = !order;
  }
  if (order){
    for (int i = 0; i < n; ++i){
      if (i != n-1) {
        cout << d.at(i) << " ";
      } else {
        cout << d.at(i);
      }
    } 
  } else {
    for (int i = (int)d.size()-1; -1 < i; --i){
      if (i != 0) {
        cout << d.at(i) << " ";
      } else {
        cout << d.at(i);
      }
    } 
  }
}
