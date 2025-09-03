#include "main.h"


int is_prime_helper(int n, int guess){
    if (n <= 1){
        return 0;
    }
    if (n % guess == 0){
        return 0;
    }
    if (guess * guess > n){
        return 1;
    }
    return is_prime_helper(n, guess + 1);
}

int is_prime_number(int n){

    return is_prime_helper(n, 2);
}
