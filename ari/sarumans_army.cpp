 #include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, r;
  cin >> n >> r;
  queue<int> X;
  for (int i = 0; i < n; i++){
    int x;
    cin >> x;
    X.push(x);
  }
  int line = 1;
  int l = r;
  for (int i = 1; i <= 1000; i++){
    l--;
    if (l == 0) {
      i = X.front();
      line++;
      l = r;
      for (int j = 0; j < r; j++){
        if (X.front() == i) {
          X.pop();
          if (X.empty()) {
            cout << line << endl;
            return 0;
          }    
        }
        i++;
      }
    }
    if (X.front() == i) {
       X.pop();
       if (X.empty()) {
         cout << line << endl;
         return 0;
       }
    }
  } 
}