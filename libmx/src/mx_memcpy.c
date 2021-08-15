#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    size_t i = 0;
    while (i < n) {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return dst;
}



// int main() {
//     unsigned char src[10] = "123456"; 
//     unsigned char dst[10] = "";
//     size_t n = 6;
//     printf("%s\n",mx_memcpy(dst,src,n));
//     printf("%s\n",memcpy(dst,src,n));
// }

