#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

int main() {  
  int n;
  cin >> n;
  if (n ==1) {
    cout << "Not Prime" << endl;
    return 0;
  }
  int N = n;
  vector<int> factors;
  int end = sqrt(N);
  for (int i = 2; i <= end; i++) {
    while (N % i == 0) {
      factors.push_back(i);
      N /= i;
    }
    if (N == 1) break;
  }
  if (N != 1) factors.push_back(N); 
  if (1 < factors.size()){
    if (n%10 == 5 ) {
      cout << "Not Prime" << endl;
      return 0;
    }
    if ((n%10)%2 == 0 ) {
      cout << "Not Prime" << endl;
      return 0;
    }
    if (n%3 == 0 ) {
      cout << "Not Prime" << endl;
      return 0;
    }
    cout << "Prime" << endl;
    return 0;
  } else {
    cout << "Prime" << endl;
    return 0;
  }
  cout << "Not Prime" << endl;
}
