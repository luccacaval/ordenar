#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

void sort(int arr[], int n) {
  for (int i = 0; i < n-1; i++) {
    int min = INT_MAX;
    int min_ind;
    for (int j = i; j < n; j++) {
      if (arr[j] < min) {
        min = arr[j];
        min_ind = j;
      }
    }
    int temp = arr[i];
    arr[min_ind] = temp;
    arr[i] = min;
  }
}

void randomize_array(int a[], int n, int lo, int hi) {
  for (int i = 0; i < n; i++) {
    a[i] = (rand() % (hi-lo)) + lo;
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
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a = atoi(argv[2]);
  int b = atoi(argv[3]);
  int list[n];
  int aux[n];
  randomize_array(list, n,a,b);
  printarray(list, n);
  sort(list, n);
  printarray(list, n);
  return 0;
}
