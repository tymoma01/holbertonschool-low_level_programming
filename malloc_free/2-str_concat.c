#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2){
   int len1 = 0 , len2 = 0, i;
   char *s;

   if (s1 == NULL){
    s1 = "";
   }
   if (s2 == NULL){
    s2 = "";
   }

   while (s1[len1] != '\0'){
    len1++;
   }
   while (s2[len2] != '\0'){
    len2++;
   }

   s = malloc((len1 + len2 + 1) * sizeof(char));
   if (s == NULL){
    return (NULL);
   }
   for (i = 0; i < len1; i++){
    s[i] = s1[i];
   }
   for (i = 0; i < len2; i++){
    s[len1 + i] = s2[i];
   }
   s[len1 + len2] = '\0';
   return (s);
}
