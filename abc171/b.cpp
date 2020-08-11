#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  int total = 0;
  cin >> n >> k;
  vector<int> fruit(n);
  for (int i = 0; i < n; i++) {
    cin >> fruit.at(i);
  }
  sort(fruit.begin(), fruit.end());
  for (int i = 0; i < k; i++) {
    total += fruit.at(i);
  }
  cout << total << endl;
}
