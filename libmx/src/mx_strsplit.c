#include "../inc/libmx.h"


char **mx_strsplit(const char *s, char c) {
    char **tmp = NULL; 
    char **tmp2 = NULL;
    int word_count = mx_count_words(s,c);
    int index = 0;
    if (s == NULL)
        return NULL;
    tmp = (char**)malloc((word_count + 1)*sizeof(char *));
    tmp2 = tmp;
    while (*s != '\0') {             
        if (*s == c)
            s++;
        else {
            index = mx_get_char_index(s,c);
            if (index == -1)
                index = mx_strlen(s);
            *tmp2 = mx_strndup(s, index);
            s += index;
            tmp2++;
        }
    }
    *tmp2 = NULL;
    return tmp;
}

