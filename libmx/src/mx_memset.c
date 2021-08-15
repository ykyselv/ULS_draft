#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    size_t i = 0;
    while(i < len) {
        ((unsigned char*)b)[i] = c;
        i++;
    }
    return b;
}

// int main() {
//     unsigned char src[15] = "34567890";
//     int c = '1';
//     printf("%s\n", mx_memset (src, c, 8));
//     printf("%s\n", memset(src,'2',8));
// }
