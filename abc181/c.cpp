#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<pa> v(n);
  for (int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    v.at(i) = make_pair(x,y);
  } 
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++){
      for (int k = j+1; k < n; k++){
        int a, b, c, d, e, f;
        a = v.at(i).first;
        b = v.at(i).second;
        c = v.at(j).first;
        d = v.at(j).second;
        e = v.at(k).first;
        f = v.at(k).second;
        int x1, y1, x2, y2;
        x1 = c-a;
        y1 = d-b;
        x2 = e-c;
        y2 = f-d;
        if ((x1*y2-y1*x2) == 0) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}
