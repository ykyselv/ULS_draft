#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    if (!arr || !delim)
        return;

    for (int i = 0; arr[i] != NULL; i++) {
        mx_printstr(arr[i]);
        if (arr[i + 1] != NULL)
            mx_printstr(delim);
    }
    mx_printchar('\n');
}


// int main() {
//     char *arr[] = {"Hello","my", "dear","friend", NULL};
//     const char *delim = " ";
//     mx_print_strarr(arr, delim);
// }






