#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define SENTIMENTAL 200000000

struct Card {
  char suit;
  int value;
};

int A[MAX];
int B[MAX];

struct Card L[MAX/2+2], R[MAX/2+2];

void merge(struct Card A[], int n, int left, int mid, int right) {
  int n1 = mid-left;
  int n2 = right-mid;
  for (int i = 0; i < n1; i++){ L[i] = A[left+i]; } 
  for (int i = 0; i < n2; i++){ R[i] = A[mid+i]; } 
  L[n1].value = R[n2].value = SENTIMENTAL;
  int i = 0;int j = 0;
  for (int k = left; k < right; k++){
    if (L[i].value <= R[j].value) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  } 
}

void mergeSort(struct Card A[], int n, int left, int right) {
  if (left +1 < right) {
    int mid = (left+right)/2;
    mergeSort(A, n, left, mid);
    mergeSort(A, n, mid, right);
    merge(A, n, left, mid, right);
  }
}

int partition(struct Card A[], int p, int r) {
  int i, j;
  struct Card t, x;
  x = A[r];
  i = p-1;
  for (int j = p; j < r; j++){
    if (A[j].value <= x.value) {
      i++;
      t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  t = A[i+1]; A[i+1] = A[r]; A[r] = t;
  return i+1;
}

void quicksort(struct Card A[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q+1, r);
  }
}
 
int main() {
  int n, i, v;
  cin >> n;
  struct Card A[MAX], B[MAX];
  char S[10];
  int stable = 1;
  for (int i = 0; i < n; i++){
    int v;
    cin >> S;
    cin >> v;
    A[i].suit = B[i].suit = S[0];
    A[i].value = B[i].value = v;
  }

  mergeSort(A, n, 0, n);
  quicksort(B, 0, n-1);
  for (int i = 0; i < n; i++){
    if (A[i].suit != B[i].suit) stable = 0;
  } 
  if (stable) printf("Stable\n");
  else printf("Not stable\n");
  for (int i = 0; i < n; i++){
    printf("%c %d\n", B[i].suit, B[i].value);
  } 
}