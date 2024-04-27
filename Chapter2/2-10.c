// Rewrite the function lower, which converts upper case letters to lower case,
// with a conditional expression instead of if-else .

#include <stdint.h>
#include <stdio.h>
int8_t lower(int8_t c) { return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c; }

int main(void) {
  printf("%c\n", lower('Z'));
  return 0;
}
