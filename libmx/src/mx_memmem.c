#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little,size_t little_len) {
    const char *haystack = (const char*) big;
    const char *needle = (const char*) little; 
     
    if(big_len == 0 || little_len == 0 || big_len < little_len)
        return NULL;
    for (int i = 0; i < (int) big_len; i++) {
        if(*haystack == needle[0]) {
            if (mx_memcmp(haystack, needle, little_len) == 0) {
                return (void*) haystack;
            }
        }
        haystack++;
    }
    return NULL;
}


// int main() {
//     const char *big = "hello my dear friend";
//     size_t big_len = 20;
//     const char *little = "de";
//     size_t little_len = 2;
//     printf("%s\n", memmem(big, big_len, little,little_len));
//     printf("%s\n", mx_memmem(big, big_len, little,little_len));
// }


