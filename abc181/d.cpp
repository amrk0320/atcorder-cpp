#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;

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
  string s;
  cin >> s;
  if (s.size() == 1){
    int a = ctoi(s.at(0));
    if (a % 8 == 0){
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;
    }
  } else if (s.size() == 2) {
    int a = ctoi(s.at(0));
    int b = ctoi(s.at(1));
    if ((a*10 + b)%8 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    if ((b*10 + a)%8 == 0) {
      cout << "Yes" << endl;
      return 0;
    }
    cout << "No" << endl;
    return 0;
  } else {
    map<int, int> ma;
    for (int i = 0; i < (int)s.size(); i++){
      ma[ctoi(s.at(i))]++;
    }
    for (int i = 100; i < 1000; i++){
      map<int, int> suji;
      suji[i/100]++;
      suji[i/10%10]++;
      suji[i%100%10]++;
      bool ok = true;
      for (auto p: suji){
        int k = p.first;
        int v = p.second;
        if (ma[k] < v){
          ok = false;
        }
      }
      if (ok){
        if (i % 2 == 0){
          int r = i/2;
          if (r % 4 == 0){
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    } 
  }
  cout << "No" << endl;
}
