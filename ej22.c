#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ene(int n, int b) {
  if (n == 0) return 1;
  return b * ene(n-1,b);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", ene(n,b));
  return 0;
}
