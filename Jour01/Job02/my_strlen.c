#include <unistd.h>

int my_strlen(char *strlen) {
  int i = 0;
  while (strlen[i] != 0) {
    i++;
  }
  return i;
}
