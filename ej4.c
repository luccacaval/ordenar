#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_search (int a[],int lo, int hi, int k){
  while (hi - lo > 1) {
    int mid = (hi + lo) / 2;
    if (a[mid] > k) {
      hi = mid;
    } else {
      lo = mid;
    }
  }
  if (a[lo] == k) {
    return lo;
  } else{
    return -1;
  }
}

void make_arr(int a[], int len) {
  int j = 0;
  for (int i = 0; i < len;i++) {
    a[i] = j;
    j += 2;
  }
}

void printarray(int a[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%02d ", a[i]);
  }
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  int lo = 0;
  int hi = atoi(argv[1]);
  int a[hi];
  int k = atoi(argv[2]);
  make_arr(a, hi);
  printarray(a,hi);
  int idx = binary_search(a,lo, hi,k);
  printf("%d\n", idx);
  return 0;
}
