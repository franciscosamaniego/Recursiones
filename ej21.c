#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ene(int n) {
  if (n == 0) return 1;
  return 2 * ene(n-1);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d\n", ene(n));
  return 0;
}
