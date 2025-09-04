#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av){
   char *res;
   int i, j, k = 0;
   int total_length = 0;
   if (ac == 0 || av == NULL){
      return (NULL);
   }
   for (i = 0; i < ac; i++){
      for (j = 0; av[i][j] != '\0'; j++){
         total_length++;
      }
      total_length++;
   }

   res = malloc((total_length + 1) * sizeof(char));
   if (res == NULL){
      return (NULL);
   }

   for (i = 0; i < ac; i++){
     for (j = 0; av[i][j] != '\0'; j++){
      res[k++] = av[i][j];
     }
     res[k++] = '\n';
   }
   res[k] = '\0';
   return (res);
}
