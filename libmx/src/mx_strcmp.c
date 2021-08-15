#include "../inc/libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;

    for ( i = 0; s1[i] || s2[i]; i++) {
        if (s1[i] != s2[i]) 
            break;
    }      
    return s1[i] - s2[i];
}
