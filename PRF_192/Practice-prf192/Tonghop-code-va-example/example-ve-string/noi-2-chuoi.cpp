#include <stdio.h> int main() {
  char s1[100] = "L?p tr�nh ", s2[] = "c co b?n";
  int length, j;
  // chi?u d�i c?a h�ng c?a s1 trong bi?n chi?u d�i
  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }
  // n?i s2 th�nh s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }
  // ch?m d?t chu?i s1
  s1[length] = '\0';
  printf("Chu?i sau c�ng: ");
  puts(s1);
  return 0;
}
