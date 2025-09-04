#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height){
   int **res;
   int i, j;
   if (width <= 0 || height <= 0){
      return (NULL);
   }
   res = malloc(height * (sizeof(int *)));
   if (res == NULL){
      return (NULL);
   }

   for (i = 0; i < height; i++){
      res[i] = malloc(width * sizeof(int));
      if (res[i] == NULL){
         while (i--){
            free(res[i]);
         }
         free(res);
         return (NULL);
      }
      for (j = 0; j < width; j++){
         res[i][j] = 0;
      }
   }
   return (res);
}
