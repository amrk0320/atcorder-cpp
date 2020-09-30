#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
  ll sum = 0;
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++){
    cin >> a.at(i);
  }
  for (int i = 1; i < n; i++){
    if (a[i-1] == a[i] || a[i-1] < a[i] ) continue;
    ll diff = a[i-1]-a[i];
    sum += diff;
    a[i] += diff;
  }
  cout << sum << endl;
}