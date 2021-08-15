#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char* t = (unsigned char*) s;
    int i = 0;
    
    while (i < (int) n) {
        if (*t != (unsigned char) c) {
            t++;
            i++;
        }
        else
            return t;
    }
    return NULL;
}

// int main() {
// unsigned char s[8] = "Trinity";
// printf("%s\n", mx_memchr(s, 'i', 7)); //returns "ity"
// //printf("%s\n", mx_memrchr("Trinity", 'M', 7)); // NULL
// }

