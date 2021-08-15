#include "../inc/libmx.h"


int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int lensub = mx_strlen(sub);
    int lenstr = mx_strlen(str);

    if (str == NULL || sub == NULL)
        return -1;
    if (lenstr >= lensub) {
        while (*str != '\0') {
            if (!mx_strncmp(str, sub, mx_strlen(sub))) 
                count++;
            str++;
        }
    }
    return count;
}

// int main() {
// const char *str= "yo, yo, yo Neo";
// const char *sub= "yo";
// printf("%d\n",mx_count_substr(str, sub)); //returns 3
// printf("%d\n",mx_count_substr(str, NULL)); //returns -1
// printf("%d\n",mx_count_substr(NULL, sub)); //returns -1
// }
