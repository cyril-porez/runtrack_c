#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *my_itoa(int n)
{
  
    char *str;
    int lengthStr = 0;
    int nbrTemp = n;
    int isNegative = n < 0 ? 1 : 0;

    while (nbrTemp)
    {
      nbrTemp = nbrTemp / 10;
      lengthStr++;
    }

    if (isNegative) {
        lengthStr++;
    }

    str = (char*)malloc(sizeof(char) * (lengthStr + 1));

    
    int i = 0;
    while(i < lengthStr) {
      int tmp = n % 10;
        str[lengthStr - i -1] = tmp < 0 ? -tmp + 48 : tmp + 48;
        n = n / 10;
        i++;
    }

    if (isNegative) {
      str[0] = '-';   
     
    }
    str[lengthStr] = '\0';
    return str;

}

// char *itoa(int n)
// {
//   char str[12];
//   // str[11] = 0;
//   int i = 10;
//   int neg = n < 0 ? 1 : 0;
//   while (n)
//   {
//     str[i--] = n % 10 + 48;
//     n /= 10;
//   }
//   if (neg)
//     str[i--] = '-';
//   i++;
//   char *ret = malloc(12 - i);
//   while (i < 12)
//     ret[i] = str[i++];
//     ret[i] = 0;
//     return ret;

// }

// int main () {
//   int i = __INT32_MAX__;
//   printf("%s\n", my_itoa(i));
//   // int j = i + 1; 
//   printf("%s\n", my_itoa(-2000));
//   printf("%s\n", my_itoa(2147483647));
//   printf("%s\n", my_itoa(-2147483648));
// }