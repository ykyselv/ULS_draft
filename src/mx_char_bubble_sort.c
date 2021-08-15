#include "uls.h"

 char **mx_char_bubble_sort(char **arr, int size) {
    char *temp;
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
           if(mx_strcmp(arr[j],arr[j+1]) > 0) {
                 temp = arr[j];
                 arr[j] = arr [j + 1];
                 arr[j + 1] = temp;
            }
        }
    }
    return arr;
}




