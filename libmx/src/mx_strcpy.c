#include "../inc/libmx.h"

char *mx_strcpy (char *dst, const char *src) {
    char *res = dst; 

    while(*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return res; 
}

// int main() {
//     char dst[20];
//     const char src[] = "Hello";
//     printf("%s\n", mx_strcpy(dst, src));
// }
