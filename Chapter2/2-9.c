// In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit
// in x . Explain why. Use this observation to write a faster version of
// bitcount .
//
// The x &= (x-1) will make the rightmost bit in the number a 0 leaving all
// other unchanged. Example of this being 1011 - 1 = 1010 then 1010 & 1011 =
// 1010. In the bitcount function this is done until x = 0 and then it stops.

#include <stdint.h>
#include <stdio.h>
int32_t bitcount(uint32_t x) {
  int32_t b;

  for (b = 0; x != 0; x &= (x - 1)) {
    ++b;
  }
  return b;
}

int main(void) {
  // 31 = 11111
  printf("%u\n", bitcount(31));
  return 0;
}
