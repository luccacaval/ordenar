#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void sort(char*a[],char*aux[], int lo, int hi) {
  if (hi - lo <= 1) return;
  int mid = lo + (hi-lo) / 2;
  sort(a,aux,lo,mid);
  sort(a,aux,mid,hi);
  int i = lo;
  int j = mid;
  for (int k = lo; k < hi; k++) {
    if      (i == mid)    aux[k] = a[j++];
    else if (j == hi)     aux[k] = a[i++];
    else if (strcmp(a[j], a[i]) < 0) aux[k] = a[j++];
    else                  aux[k] = a[i++];
  }
  for (int k = lo; k < hi; k++) {
    a[k] = aux[k];
  }
}

void randomize_array(char * a[], int n, int lo, int hi) {
  FILE *fp;
  fp = fopen ("rockyou.txt","r");
  for (int i = 0; i < n; i++) {
    char *buffer;
    fgets(buffer, 100, fp);
    strcpy(a[i], buffer);
  }
  fclose(fp);
}

void printarray(char *a[], int n) {
  printf("[");
  for (int i = 0; i < n; i++) {
    printf("%s ", a[i]);
  }
  printf("]\n");
}

int main(int argc, char const *argv[]) {
  char *list[10] = {"lucca","fran","alan","papa","queso","pala","enzo","boca","pico","milei"};
  char *aux[10];
  printarray(list, 10);
  sort(list, aux, 0, 10);
  printarray(list, 10);
  return 0;
}
