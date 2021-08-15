#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {
    char * dublicate = mx_strnew(mx_strlen(s1));
    
    mx_strcpy(dublicate, s1); 
    return dublicate;
}

// int main() {
//     printf("%s\n",mx_strdup("Hello my dear friend"));
// }
