#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main() {
  string n;
  cin >> n;
  ll sum = 0;
  ll len = n.size();
  for (int i = 0; i < len; i++){
    int num = ctoi(n[i]);
    sum += num;
  }
  sum %= 9;
  if (sum == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}