#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  vector<int> v{1,2,3,4,5,6};
  int l = n;
  if (100 < n) l %= 30;
  for (int i = 0; i < l; i++){
    int a = i%5+1;
    int b = i%5+2;
    swap(v.at(a-1),v.at(b-1));
  }
  for(auto num: v){ cout << num; }
  cout << endl;
}
