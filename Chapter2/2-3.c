// Write the function htoi(s) , which converts a string of hexadecimal digits
// (including an optional 0x or 0X) into its equivalent integer value. The
// allowable digits are 0 through 9, a through f, and A through F

#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int32_t power(int32_t base, int32_t exp) {
  int32_t ans = 1;
  for (size_t i = 0; i < exp; ++i) {
    ans = ans * base;
  }
  return ans;
}

int32_t htoi(char hex[]) {
  int32_t decimal = 0;
  int32_t bound = 0;
  if (tolower(hex[1]) == 'x')
    bound = 2;
  for (int32_t j = 0, i = strlen(hex) - 1; i >= bound; --i, ++j) {
    if (hex[i] >= '0' && hex[i] <= '9') {
      decimal += (hex[i] - '0') * power(16, j);
    } else if (tolower(hex[i]) >= 'a' && tolower(hex[i]) <= 'f') {
      decimal += (tolower(hex[i]) - 87) * power(16, j);
    }
  }
  return decimal;
}

int main(void) {
  char *hex = "0xAB123";
  printf("%s in hex is %d in decimal\n", hex, htoi(hex));
  return 0;
}
