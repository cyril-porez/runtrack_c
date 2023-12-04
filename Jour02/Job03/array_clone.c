#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



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

char **array_clone(char **strs, int n) 
{
  if (strs == NULL || n <= 0) {
    return NULL;
  }

  int i = 0;
  while (strs[i] != NULL && i < n) {
    i++;
  }

  char **newVal = malloc((i + 1) * sizeof(char *));

  int j = 0;
  while (j < i)
  {
    newVal[j] = my_strdup(strs[j]);
    j++;
  }
  newVal[j] = NULL;
  return newVal; 
}
