#include <stdio.h> 
int main() {
    char s[] = "Chuong trinh dang ch?y";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
      printf("Ð? dài chu?i: %d", i);
    return 0;
}
