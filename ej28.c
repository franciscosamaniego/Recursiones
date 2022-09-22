#include <stdio.h>
#include <stdlib.h>

int search(int a[], int size, int n) {
  int index = -1;
  for(int i = 0; i < size; i++) {
    if (a[i] == n) index = i;
  }
  return index;
}

// int rand_arr(int lo, int hi) {
//   return (rand() % (hi - lo)) + lo;
// }
//
// void make_rand(int a[], int length, int lo, int hi) {
//   int r = rand_arr(lo,hi);
//   a[i] = r;
// }

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int size = atoi(argv[2]);
  int a[] = {1,2,3,10,78,200,5,19,10};
  printf("%d\n", search(a,size,n));
  return 0;
}
