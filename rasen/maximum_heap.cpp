#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll heap[500000+1];

ll parent(ll i){
  return i/2;
}

ll left(ll i){
  return 2*i;
}

ll right(ll i){
  return 2*i+1;
}

void max_heapify(int i, int h){
  int l = left(i);
  int r = right(i);
  int largest;
  if (l <= h && heap[i] < heap[l]){
    largest = l;
  } else {
    largest = i;
  }
  if (r <= h && heap[largest] < heap[r]){
    largest = r;
  }
  if (largest != i) {
    swap(heap[i], heap[largest]);
    max_heapify(largest, h);
  }
}
 
int main() {
  int h;
  cin >> h;
  for (int i = 1; i <= h; i++){
    cin >> heap[i];
  }
  for (int i = h/2; 0 < i; i--){
    max_heapify(i, h);
  } 
  for (int i = 1; i <= h; i++){
    cout << " " << heap[i];
  }
  cout << endl;
}