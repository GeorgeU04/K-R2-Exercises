// Exercise 2.1 create a program that determines ranges of different standard
// types; ints, long, char, etc..
#include <float.h>
#include <limits.h>
#include <stdio.h>
int main(void) {
  printf("Char Max: %d\n", CHAR_MAX);
  printf("Char Min %d\n", CHAR_MIN);
  printf("Signed Char Max: %d\n", SCHAR_MAX);
  printf("Signed Char Min %d\n", SCHAR_MIN);
  printf("Unsigned Char Max %u\n", UCHAR_MAX);
  printf("Short Max: %d\n", SHRT_MAX);
  printf("Short Min %d\n", SHRT_MIN);
  printf("Unsigned Short Max %u\n", USHRT_MAX);
  printf("Int Max: %d\n", INT_MAX);
  printf("Int Min %d\n", INT_MIN);
  printf("Unsigned Int Max %u\n", UINT_MAX);
  printf("Long Max %ld\n", LONG_MAX);
  printf("Long Min %ld\n", LONG_MIN);
  printf("Unsigned Long Max %lu\n", ULONG_MAX);
  printf("Float Max %f\n", FLT_MAX);
  printf("Float Min %f\n", FLT_MIN);
  printf("Double Max %f\n", DBL_MAX);
  printf("Double Min %f\n", DBL_MIN);
  return 0;
}
