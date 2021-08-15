#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *t1 = s1;
    const unsigned char *t2 = s2;
    size_t i = 0;
    
    while (i < n) {
        if (t1[i] != t2[i])
            return t1[i]-t2[i];
        i++;
    }
    return 0;

}

// int main() {
//     unsigned char s1[15] = "1234567890";
//     unsigned char s2[15] = "1234567890";
//     printf("%d\n", mx_memcmp (s1,s2,10));
//     printf("%d\n", memcmp (s1,s2,10));
// }
