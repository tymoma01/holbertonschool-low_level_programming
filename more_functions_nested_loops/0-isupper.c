#include "main.h"
#include <ctype.h>

int _isupper(char c)
{
    if (c >= 'A' && c <= 'Z'){
        return(1);
    }
    else {
        return(0);
    }
}
