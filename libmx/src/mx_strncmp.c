#include "../inc/libmx.h"

int mx_strncmp(const char*s1, const char*s2, int size) {
    int i = 0;

    if (size == 0)
        return 0;
    while ((s1[i] !='\0' && s2[i] !='\0' && i < size))
    {
        if (s1[i] != s2[i]) {
        return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}
