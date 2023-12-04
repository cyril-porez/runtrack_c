#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char *str) {
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *my_strdup(char *src) {
  int strlen = my_strlen(src) + 1;
  char *dest = malloc(strlen);

  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }

  dest[i] = '\0';

  return dest;
}
