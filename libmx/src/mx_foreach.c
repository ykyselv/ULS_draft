#include "../inc/libmx.h"

void mx_foreach(int*arr, int size, void(*f)(int)) {
    
    if(arr == NULL || size == 0)
        return;

    for (int i = 0; i < size; i++)
        f(arr[i]);            
}

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8};
//     mx_foreach(arr,8, mx_printint);
// }
