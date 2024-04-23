// Write an alternate version of squeeze(s1,s2) that deletes each character in
// the string s1 that matches any character in the string s2 .

#include <stdint.h>
#include <stdio.h>

void squeeze(char s1[], const char s2[]) {
  int32_t i, j, k;
  for (i = 0; s2[i] != '\0'; i++) {
    for (k = 0, j = 0; s1[k] != '\0'; k++) {
      if (s2[i] != s1[k]) {
        s1[j++] = s1[k];
      }
    }
    s1[j] = '\0';
  }
  printf("%s\n", s1);
}

int main() {
  char s1[] = "cooked";
  const char s2[] = "aeiou";
  squeeze(s1, s2);
  return 0;
}
