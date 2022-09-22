#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int a[], int length) {
  for(int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int rand_arr(int lo, int hi) {
  return (rand() % (hi - lo)) + lo;
}

void make_rand(int a[], int size, int lo, int hi) {
  for(int i = 0; i < size; i++) {
    int r = rand_arr(a,i,lo,hi);
    a[i] = r;
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int a_size = atoi(argv[1]);
  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  int a[a_size];
  make_rand(a,a_size,lo,hi);
  print_array(a,a_size);
  return 0;
}
