#include "../inc/libmx.h"

char *mx_replace_substr (const char *str, const char *sub, const char *replace) {

    if(str == NULL || sub == NULL || replace == NULL)
        return NULL;

    int lenthsub = mx_strlen(sub);
    int lentmp = mx_strlen(str) + mx_strlen(replace) - mx_strlen(sub);
    char *tmp = mx_strnew(lentmp);
    int j = 0;
    int k = 0;

    for (int i = 0; i < mx_strlen(str); i++) {
        if (str[i] != sub[0]) {
            tmp[j] = str[i];
            j++;
        }
        if ( str[i] == sub[0] ) {
            if (mx_strncmp(&str[i], sub, lenthsub) == 0) {
                while (k < mx_strlen(replace)) { 
                    tmp[j] = replace[k];
                    k++;
                    j++;
                }
                k = 0; 
                i = i + lenthsub - 1; 
            }
        }
    }
    return tmp;
}

// int main() {
// //printf("%s\n",mx_replace_substr("McDonalds", "alds", "uts")); //returns "McDonuts"
// printf("%s\n",mx_replace_substr("Ururu turu", NULL , "ta")); //returns "Utata tuta"
// }
