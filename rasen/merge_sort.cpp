#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
#define SENTIMENTAL 2000000000

int cnt;
int L[MAX/2+2], R[MAX/2+2];

void merge(int A[], int n, int left, int mid, int right) {
  int n1 = mid-left;
  int n2 = right-mid;
  for (int i = 0; i < n1; i++){ L[i] = A[left+i]; } 
  for (int i = 0; i < n2; i++){ R[i] = A[mid+i]; } 
  L[n1] = R[n2] = SENTIMENTAL;
  int i = 0;int j = 0;
  for (int k = left; k < right; k++){
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  } 
}

void mergeSort(int A[], int n, int left, int right) {
  if (left +1 < right) {
    int mid = (left+right)/2;
    mergeSort(A, n, left, mid);
    mergeSort(A, n, mid, right);
    merge(A, n, left, mid, right);
  }
}
 
int main() {
  int A[MAX];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> A[i];
  }
  mergeSort(A, n, 0, n);
  for (int i = 0; i < n; i++){
    if(i) printf(" ");
    cout << A[i];
  }
  cout << endl;
  printf("%d\n", cnt);
}