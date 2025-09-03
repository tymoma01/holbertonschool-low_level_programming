#include "main.h"

int is_palindrome_helper(char *s, int n, int i){
    if (i >= n/2){
        return 1;
    }
    if (s[i] != s[n - i - 1]){
        return 0;
    }
    return is_palindrome_helper(s, n, i+1);
}

int is_palindrome(char *s){
    int len = 0;
    if (*s == '\0'){
        return 1;
    }
    while (s[len] != '\0'){
        len++;
    }
    return is_palindrome_helper(s, len, 0);
}
