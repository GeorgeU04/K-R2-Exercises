// Write a function setbits(x,p,n,y) that returns x with the n bits that begin
// at position p set to the rightmost n bits of y, leaving the other bits
// unchanged.

#include <stdint.h>
#include <stdio.h>
uint32_t setbits(uint32_t x, int32_t p, int32_t n, int32_t y) {
  int32_t shift = (p + 1 - n);
  return ((x & ~(~(~0 << n) << shift)) | ((~(~0 << n) & y) << shift));
}

int main(void) {
  printf("%d\n", setbits(255, 4, 2, 10));
  return 0;
}
