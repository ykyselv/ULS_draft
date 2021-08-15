#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int i = 0;
    char *result = NULL;
    int len = mx_strlennum(nbr);
    int flag = 0;

    if (nbr == 0)
        return mx_strdup("0");
        
    result = mx_strnew(len);
    for (; nbr > 0 ; i++, nbr /= 16) {
        int nbros = nbr % 16;
        if (nbros <= 9)
            result[i] = (nbros + 48);
        else 
            result[i] = nbros + 87; 
    }

    for (int j = 0; j < i / 2; j++) {
        char temp = result[i - j - 1];
        result[i - j - 1] = result[j + flag];
        result[j + flag] = temp; 
    }
    return result;
}     


// int main() {
//     printf("%s",mx_nbr_to_hex(1000));
// }
