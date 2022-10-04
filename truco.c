#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// bool validar(char d, char e, char f) {
//   bool res = false;
//   if(d != 'c' && d != 'e' && d != 'b' && d != 'o') res = true;
//   if(e != 'c' && e != 'e' && e != 'b' && e != 'o') res = true;
//   if(f != 'c' && f != 'e' && f != 'b' && f != 'o') res = true;
//   return res;
// }


int no_envido(int a, int b, int c) {
  if(a >= 1 && a <= 7 && a > b || a > c) return a;
  else if(b >= 1 && b <= 7 && b > a || b > c) return b;
  else if(c >= 1 && c <= 7 && c > b || c > a) return c;
  else return 0;
}

void figura (int *a, int *b, int *c){
  if(*a >= 10 && *a <= 12) *a = 0;
  if(*b >= 10 && *b <= 12) *b = 0;
  if(*c >= 10 && *c <= 12) *c = 0;
}

int maxi(int a, int b) {
  return a >= b ? a : b;
}

int envido(int a, char d, int b, char e, int c, char f) {
  figura(&a,&b,&c);
  int res = 0;
  if(d == e) res = a + b + 20;
  else if (e == f) res = b + c + 20;
  else if (d == f) res = a + c + 20;
  else if(d == f && e == f) {
     res = maxi(maxi(a,b),c);
  }
  else res = no_envido(a,b,c);
    return res;
  }

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[3]);
  int c = atoi(argv[5]);
  char d = argv[2][0];
  char e = argv[4][0];
  char f = argv[6][0];
    int res = envido(a,d,b,e,c,f);
    printf("%d\n", res);
  return 0;
}
