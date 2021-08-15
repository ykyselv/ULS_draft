#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *temp = (char*)malloc(len);

    mx_memcpy(temp, (const char*) src, len);
    mx_memcpy((char *) dst, temp, len );
    free (temp);
    return dst;
}
  
// int main() {
//     unsigned char src[11] = "1234567890";
//     printf("old: %s\n",src);
//     mx_memmove(&src[4], &src[3], 3);
//     printf("new: %s\n",src);
// }
