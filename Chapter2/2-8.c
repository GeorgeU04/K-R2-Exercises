// Write a function rightrot(x,n) that returns the value of the integer x
// rotated to the right by n bit positions.

#include <stdint.h>
#include <stdio.h>

uint32_t rightrot(uint32_t x, int32_t n) {
  int num_bits = sizeof(uint32_t) * 8;
  n = n % num_bits;
  return (x >> n) | (x << (num_bits - n));
}

int main(void) {
  printf("%u\n", rightrot(0b11001100, 3));
  return 0;
}
