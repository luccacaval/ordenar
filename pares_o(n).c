#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int aux[], int lo, int hi) {
  if (hi - lo <= 1) return;
  int mid = lo + (hi-lo) / 2;
  sort(a,aux,lo,mid);
  sort(a,aux,mid,hi);
  int i = lo;
  int j = mid;
  for (int k = lo; k < hi; k++) {
    if      (i == mid)    aux[k] = a[j++];
    else if (j == hi)     aux[k] = a[i++];
    else if (a[j] < a[i]) aux[k] = a[j++];
    else                  aux[k] = a[i++];
  }
  for (int k = lo; k < hi; k++) {
    a[k] = aux[k];
  }
}

int abso(int n){
  return n < 0 ? -n :n;
}

void pares(int a[], int j) {
  int i = 0;
  int res = 0
  while (i == j) {
    if (abso(a[i]) == abso(a[j])) {
      res++;
    }
  }
}
