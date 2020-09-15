#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int n, A[MAX];

int partition(int p, int r) {
  int x ,i, j, t;
  x = A[r];
  i = p-1;
  for (int j = p; j < r; j++){
    if (A[j] <= x) {
      i++;
      t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  t = A[i+1]; A[i+1] = A[r]; A[r] = t;
  return i+1;
}
 
int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> A[i];
  }
  int q;
  q = partition(0, n-1);
  for (int i = 0; i < n; i++){
    if (i) printf(" ");
    if (i == q) printf("[");
    printf( "%d", A[i]);
    if (i == q) printf("]");
  }
  printf("\n");
  return 0;
}