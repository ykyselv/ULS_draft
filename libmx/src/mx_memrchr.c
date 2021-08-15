#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char* t = (unsigned char*) s;
    int i = (int) n - 1;
    while (i >= 0) {
        if (t[i] != (unsigned char) c)
            i--;
        else
            return &t[i];
    }
    return NULL;
}
// int mx_strlen(const char *s);
// void *mx_memrchr(const void *s, int c, size_t n) {
//     unsigned char *d = (unsigned char*)s + mx_strlen(s) - 1;

//     while (n--) {
//         if (*d != (unsigned char)c)
//             d--;
//         else
//             return d;
//     }
//     return NULL;
// }

// int main() {
//     unsigned char s[8] = "Trinity";
//     printf("%s\n", mx_memrchr(s, 'i', 7)); //returns "ity"
//     //printf("%s\n", mx_memrchr("Trinity", 'M', 7)); // NULL
// }
