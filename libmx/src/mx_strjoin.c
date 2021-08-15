#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    if (!s1 && !s2) return NULL;
    if (!s2) return mx_strdup(s1);
    if (!s1) return mx_strdup(s2);
    // printf("LLLLLLL:   %s\n", mx_strcat(mx_strcpy(mx_strnew(mx_strlen(s1) + mx_strlen(s2)), s1), s2));
    return mx_strcat(mx_strcpy(mx_strnew(mx_strlen(s1) + mx_strlen(s2)), s1), s2);
}

// int main() {
//     const char *str1= "this";
//     const char *str2= "dodge ";
//     const char *str3= NULL;
//     printf("%s\n",mx_strjoin(str2, str1)); //returns "dodge this"
//     printf("%s\n",mx_strjoin(str1, str3)); //returns "this"
//     printf("%s\n",mx_strjoin(str3, str3)); 
// }



