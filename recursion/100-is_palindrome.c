#include "main.h"

int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

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
    if (*s == '\0'){
        return 1;
    }
    
    return is_palindrome_helper(s, _strlen_recursion(s), 0);
}
