#include <unistd.h>
#include <stdio.h>


int str_is_digit(char *str) {

  int i = 0;
  int isNumber = 1;
  while (str[i] != '\0') {
    if (!(str[i] >= '0' && str[i] <= '9')) {
        isNumber = 0;
    }
    i++;
  }
  return isNumber;
}
