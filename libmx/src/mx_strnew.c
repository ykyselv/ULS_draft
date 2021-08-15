#include "../inc/libmx.h"

char *mx_strnew(const int size) {
    char *new_string = (char*)malloc(sizeof(char) * (size+1));
    
    if (new_string == NULL || size < 0) 
        return 0;
    for (int i = 0; i <= size; i++)
        new_string[i] = '\0';
    return new_string;
}

// int main() {
//     printf("%s\n",mx_strnew(5));
//     system("leaks -q a.out");
// }
