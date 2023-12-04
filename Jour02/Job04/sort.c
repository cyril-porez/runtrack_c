#include <unistd.h>
#include <stdio.h>

void swap(char **a, char **b) {
  char *temp = *a;
  *a = *b;
  *b = temp;
}

int my_strcmp(char *s1, char *s2) {
  
  int i = 0;
  while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i]) {
    
    i++;
  }
  return s1[i] - s2[i];
}

char **sort(char **strs) 
{
    int i = 0;
    while (strs[i] != NULL)
    {
        int j = i + 1;
        while (strs[j] != NULL)
        {
            int comp = my_strcmp(strs[i], strs[j]);
            if (comp < 0) {
              swap(&strs[i], &strs[j]);
            }
            j++;
        }
        i++;
    }
    return strs;
}


