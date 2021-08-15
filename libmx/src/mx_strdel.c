#include "../inc/libmx.h"

void mx_strdel(char **str) {
    if (*str) {
        free(*str);
        *str = NULL;
    }
}
// int main() {
//     char *str[] = {"Hello"};
//     mx_strdel(str);
//     printf("%s\n", *str);
// }
