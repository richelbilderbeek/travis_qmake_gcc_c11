#include <assert.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <complex.h>
#include <stdnoreturn.h>
#include <uchar.h>
#include <stdatomic.h>
#include <stdalign.h>

#define acos(X) _Generic((X), \
    long double complex: cacosl, \
    double complex: cacos, \
    float complex: cacosf, \
    long double: acosl, \
    float: acosf, \
    default: acos \
    )(X)

int main() 
{ 
  const int alignas(double) b = 42;
  assert(b == 42);
  //static_assert(1 + 1 == 2, "");
  //printf("%f", cos(0.0));
  const int sz = 1 + (rand() % 10);
  printf("sz: %i\n", sz);
  int x[sz];
  const int sz_again = sizeof(x) / sizeof(int);
  printf("sz_again: %i\n", sz_again);
  for (int i=0; i!=sz; ++i) { x[i] = i; }
  for (int i=0; i!=sz; ++i) { printf("%i\n", x[i]); }

}
