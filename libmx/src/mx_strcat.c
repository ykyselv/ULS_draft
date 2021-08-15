#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i = 0;
    int j = 0;

    while (s1[i] != '\0') 
        i++;
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return s1;
}

// int main() {
//     char *restrict s1 = "Hello";
//     char *restrict s2 = "my dear friend";
//     printf("%s", mx_strcat(s1, s2));
// }
