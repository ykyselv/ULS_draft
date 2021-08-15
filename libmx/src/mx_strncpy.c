#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    for (int i = 0; i < len; i++) {
    dst[i] = src[i];
    }
    return dst;
}

// int main() {
//     char dst[20];
//     const char src[] = "Hello";
//     int len = 2;
//     printf("%s\n", mx_strncpy(dst, src, len));
// }
