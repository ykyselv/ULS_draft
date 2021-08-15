#include "../inc/libmx.h"


void mx_del_strarr(char ***arr) {

    for (int i = 0; (*arr)[i] != NULL; i++) { 
        mx_strdel(&(*arr)[i]);
    }
    free(*arr);
    *arr = NULL;
}


//int main() {
//     char **arr = {"Hello", "my", "dear", "friend", NULL};
//     // for (int i = 0; i < 5; i++) {
//     //     printf("%s\n", arr[i]);
//     //     //write(1, arr[i], strlen(arr[i]));
//     // }  
//     mx_del_strarr(&arr); 
//     printf("%s\n", *arr);
// }
