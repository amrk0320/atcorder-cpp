#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  int n,M;
  cin >> n >> M;
  map<int, int> b;
  vector<pair<int, int>> m(M);
  for (int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    pair<int,int> p(a, b);
    m.at(i) = p;
  }
  sort(m.begin(), m.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });
  for(auto p: m) {
    int yobo_left = p.first;
    int yobo_right = p.second;
    if (b.size() == 0) {
      b[yobo_right-1] = yobo_right;
    } else {
      for(auto bri: b) {
        int bri_left = bri.first;
        int bri_right = bri.second;
        if (bri_right <= yobo_left) {
          b[yobo_right-1] = yobo_right;
          break;
        } else if (yobo_right <= bri_left) {
          pair<int,int> kukan(yobo_right-1, yobo_right);
          b.push_back(kukan);
          break;
        }
      }
    }
  }
  cout << b.size() << endl;
}