#include "../inc/libmx.h"

   int mx_get_substr_index(const char *str, const char *sub) {
    
    if (str == NULL || sub == NULL)
        return -2;
    for (int i = 0; *str; i++) {
        if (mx_strncmp(str, sub, (mx_strlen(sub))) == 0)
            return i;
        str++;
    }
    return -1;
}
// int main() {
//     printf("%d\n",mx_get_substr_index("McDonalds", "na")); //returns 4
//     printf("%d\n",mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
//     printf("%d\n",mx_get_substr_index("McDonalds", "Donatello")); //returns -1
//    printf("%d\n",mx_get_substr_index("McDonalds", NULL)); //returns -2
//     printf("%d\n",mx_get_substr_index(NULL, "Don")); //returns -2
// }
