#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
  if (n == 1) return 1;
  return n * fact(n-1);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d\n", fact(n));
  return 0;
}
