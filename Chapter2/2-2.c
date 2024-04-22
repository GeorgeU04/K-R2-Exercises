// Write an equivalent for loop without using && or ||
/*
        for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
                s[i] = c;
*/
#include <stdint.h>
#include <stdio.h>

#define MaxLen 1000
int main(void) {
  int32_t lim = MaxLen;
  char message[MaxLen];
  char c;
  size_t i = 0;
  for (; i < lim - 1; ++i) {
    c = getchar();
    if (c == '\n')
      break;
    if (c == EOF)
      break;
    message[i] = c;
  }
  message[i] = '\0';
  printf("Output: %s\n", message);
  return 0;
}
