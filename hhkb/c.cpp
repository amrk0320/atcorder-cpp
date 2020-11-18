#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  map<int, int> p;
  int now = 0;
  int ma = 0;
  for (int i = 0; i < n; i++){
    int num;
    cin >> num;
    p[num]++;
    if (!p.count(now)){
      cout << now << endl;
    } else {
      for (int j = now+1; j <= 200000 ; j++){
        if (!p.count(j)){
          cout << j << endl;
          now = j;
          break;
        }
      } 
    }
  } 
}
