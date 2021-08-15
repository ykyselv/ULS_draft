#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    int lenth;
    char *res = NULL;
    
    if (str == NULL)
        return NULL;
    while(mx_isspace(*str) == 1 )
        str++;
    lenth = mx_strlen(str);
    while (mx_isspace(str[lenth-1]) == 1)
        lenth--;
    if (lenth < 0) {
        res = mx_strnew(0);
        return res;
    }
    res = mx_strndup(str, lenth);
    return res;
}  

// int main() {
// const char *name= "\f   My name... is Neo  \t\n";
// printf ("%s",mx_strtrim(name));
// }  
