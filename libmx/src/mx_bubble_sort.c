#include "../inc/libmx.h"  

int mx_bubble_sort(int *arr, int size) {
    int counter = 0;
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            counter++;
            }
        }
    }
    return counter;
}

// int main() {

// int arr[] = { -11, 79, 69, -9, -23, 2, 43, 66, -25, 35, 38, 61, 84, 7, 11 };
// printf("%d\n",mx_bubble_sort(arr, 15));

// int arr0[] = {68, -20, 2, -6, 8, 53, 79, -30, -25};
// printf("%d\n",mx_bubble_sort(arr0, 9)); 

// int arr1[] = { -7, -23 };
// printf("%d\n",mx_bubble_sort(arr1, 2));

// int arr2[] = { 33,19, 39, 47, 10, 63, 69, 48, 26, 25, 67, -4, 2 };
// printf("%d\n",mx_bubble_sort(arr2, 13));
// }
