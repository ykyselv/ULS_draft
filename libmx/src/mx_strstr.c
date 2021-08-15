#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {

    if(haystack == NULL)
        return NULL;
    if (mx_strlen(needle) == 0)
        return (char*) haystack;

    while (*haystack != '\0') {
        if (*haystack == needle[0]) {
            if (mx_strncmp(haystack,needle,mx_strlen(needle)) == 0)
            return (char*) haystack;
        }
        haystack++;
    }
    return 0;
}

// int main() {
// const char *haystack = "hewllo worldfdfdfd"; 
// const char *needle = "wor";
// printf("Classic: %s\n", strstr(haystack, needle));
// printf("%s\n", mx_strstr(haystack, needle));
// }
