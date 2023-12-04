#include <unistd.h>
#include <stdio.h>

int char_is_digit(char c) {
  int i = 0;
  if (c >= '0'&& c <= '9' ) {
    i = 1;
  }
  return i;
}
