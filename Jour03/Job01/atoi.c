#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int my_atoi(char *str) 
{
    int sign = 1;
    int i = 0;
    int nbr = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
          || str[i] == '\r' || str[i] == '\t' || str[i] == '\v' ) 
    {
      i++;
    }

    if (str[i] == '-' || str[i] == '+') 
    {
        if (str[i] == '-' ) 
        {
          sign = -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    return nbr * sign;
}

