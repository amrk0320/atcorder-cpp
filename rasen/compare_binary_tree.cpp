#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll NIL = -2*10e10;
ll heap[250+1];
 
int main() {
  int h;
  cin >> h;
  for (int i = 0; i <= 250; i++)heap[i] = NIL;
  for (int i = 1; i <= h; i++){
    cin >> heap[i];
  }
  for (int i = 1; i <= h; i++){
    int p = i/2;
    int l = 2*i;
    int r = 2*i+1;
    cout << "node ";
    cout << i;
    cout << ": key = ";
    cout << heap[i];
    cout << ", ";
    if ( 0 < p && heap[p] != NIL) {
      cout << "parent key = ";
      cout << heap[p];
      cout << ", ";
    }
    if ( l < h+1 && heap[l] != NIL) {
      cout << "left key = ";
      cout << heap[l];
      cout << ", ";
    }
    if ( r < h+1 && heap[r] != NIL) {
      cout << "right key = ";
      cout << heap[r];
      cout << ", ";
    }
    cout << endl;
  } 
}