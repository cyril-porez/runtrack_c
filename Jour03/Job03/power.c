#include <stdio.h>

int power(int n, int power)
{
  int result = 1;

  
    while (power > 0)
    {
      result = result * n;
      power--; 
    }
 
  return result;
} 

// int main() {
//   printf("%d",power(9, 0));
// }