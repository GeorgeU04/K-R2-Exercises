// Write a function invert(x,p,n) that returns x with the n bits that begin at
// position p inverted (i.e., 1 changed into 0 and vice versa), leaving the
// others unchanged.

#include <stdint.h>
#include <stdio.h>

int32_t invert(uint32_t x, int32_t p, int32_t n) {
  return (x ^ (~(~0 << n) << p));
}

int main(void) {
  printf("%d\n", invert(127, 1, 1));
  return 0;
}
