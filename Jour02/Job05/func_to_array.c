#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

void convert_to_upper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}
void putstr(char *str) {
    while (*str != '\0') { // Tant que le caractère n'est pas '\0' (fin de chaîne)
        putchar(*str);     // Utilise putchar pour imprimer le caractère courant
        str++;             // Passe au caractère suivant dans la chaîne
    }
}

void func_to_array(char **strs, void (*fun)(char*))
{
    int i = 0;
    while (strs[i] != NULL) {  
      fun(strs[i]);    
      i++;
    }
}

int main() {
  // tableau fix ne peut pas être modifier directement utiliser sort
  char *array[] = {"hokuto", "bleach", "captain tsubasa", "dragonball", "onepiece", "detective conan", NULL};
  func_to_array(array, putstr);
}