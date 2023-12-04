#include <unistd.h>
#include <stdio.h>

int my_strcmp(char *s1, char *s2) {
  
  int i = 0;
  int result = 0
  while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i]) {
    
    i++;
  }
  if (s1[i] - s2[i] > 0)
    result = 1;
  else if (s1[i] - s2[i] > 0)
    result = -1;
  return result;
}



int main () {
  char *s1 = "Helo";
  char *s2 = "Hello";
  printf("%d", my_strcmp(s1, s2));
}