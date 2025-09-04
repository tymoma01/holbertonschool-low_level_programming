#include <stdlib.h>
#include "main.h"

static int count_words(const char *str)
{
    int i = 0, words = 0, in_word = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else {
            in_word = 0;
        }
        i++;
    }
    return words;
}

char **strtow(char *str)
{
    char **res;
    int i = 0, j, k = 0, start, len, words;

    if (str == NULL || *str == '\0')
        return NULL;

    words = count_words(str);
    if (words == 0)
        return NULL;

    res = malloc((words + 1) * sizeof(*res));
    if (res == NULL)
        return NULL;

    while (str[i] != '\0') {
        while (str[i] == ' ')
            i++;

        if (str[i] == '\0')
            break;

        start = i;
        len = 0;
        while (str[i] != '\0' && str[i] != ' ') {
            len++;
            i++;
        }

        res[k] = malloc((len + 1) * sizeof(char));
        if (res[k] == NULL) {
            while (k > 0) {
                free(res[k - 1]);
                k--;
            }
            free(res);
            return NULL;
        }
        for (j = 0; j < len; j++)
            res[k][j] = str[start + j];
        res[k][len] = '\0';
        k++;
    }

    res[k] = NULL;
    return res;
}
