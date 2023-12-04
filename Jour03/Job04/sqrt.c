#include <stdio.h>

int my_sqrt(int n)
{
   while ((n - n / n) > 0) {
        n = (n + n / n) / 2;
    }
    return n;
}

// int main() {
//   printf("%d", my_sqrt(25));
// }