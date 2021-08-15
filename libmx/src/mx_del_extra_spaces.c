#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *temp = NULL;
    char *newstr = NULL;
    int i = 0;
    int j = 0;
    
    if(str == NULL)
        return NULL;
    newstr = mx_strnew(mx_strlen(str));
    while(str[i] != '\0') {
        if(mx_isspace(str[i]) == 0) {
            newstr[j] = str[i];
            j++;
        }
        if (mx_isspace(str[i]) == 0 && mx_isspace(str[i+1]) == 1) {
            newstr[j] = ' ';
            j++;
        }
        i++;
    }
    temp = mx_strtrim(newstr);
    mx_strdel(&newstr);
    return temp;
}


// int main() {
// const char *name= "\f  My name...    is  \r Neo  \t\n ";
// printf ("%s",mx_del_extra_spaces(name)); //returns "My name... is Neo
// }
