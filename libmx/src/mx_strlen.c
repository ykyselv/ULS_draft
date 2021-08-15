#include "../inc/libmx.h"

int mx_strlen(const char *s) {
    // int counter = 0;

    // if(s == NULL)
    //     return 0;

    // while (*s != '\0') {
    //     counter++;
    //     s++;
    // }
    // return counter;
    int counter = 0;
    for (; s[counter] != '\0'; counter++);
    return counter;
}

// int main() {
//     printf("%d\n", mx_strlen(NULL));
// }

