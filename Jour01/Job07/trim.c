#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str) {
  int i = 0;
  while(str[i] != '\0') {
    i++;
  }
  return i;
}

char *trim(char *src){
  int length = my_strlen(src) - 3;
  char *dest = malloc(length + 1);
  int i = 0;
  while (src[i] != '\0') {
    if (src[i] != ' ' && src[i + 1] != ' ') {
      dest[i] = src[i];
    }
    i++;
  }
  dest[i] = '\0';
  return dest;
}

int main() {
  printf("%s", trim("   test"));
}