#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *srcn = (unsigned char *)src;
    unsigned char *dstn = (unsigned char *)dst;
    size_t i = 0;
   
    while(i < n) {
            dstn[i] = srcn[i];
        if (srcn[i] == c) {
            return dstn + (i + 1);
        }
        i++;
    }
    return NULL;
}
   


// int main() {
//     unsigned char src[15] = "1234567890";
//     unsigned char dst[15] = "";
//     printf("%s\n",mx_memccpy(dst,src,'5', 10));
//     //printf("%s\n",dst); 
//     //memccpy(dst,src,'5', 10);
//     //printf("Classic: %s\n",dst);
// }
