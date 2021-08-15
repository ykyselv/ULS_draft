#include "../inc/libmx.h"

int mx_firstpart (int *arr, int left, int right, int *counter) {
         
    int i = left;
    int j = right-1;
    int opor = arr[right];
    int temp;

    while (i < j) {
        while (arr[i] < opor && j > i)
              i++;
        while (arr[j] > opor && j > i)
              j--;
        if (i < j) {
            if (arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            (*counter)++;
            }
        }
    }
    if (arr[right] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[right];
        arr[right] = temp;
        (*counter)++;
    }
    return j;
}

int mx_quicksort (int *arr, int left, int right) {
    int counter = 0;

    if (arr == NULL)
        return -1;
    if(left < right) {
        int fp = mx_firstpart (arr, left, right, &counter);
        counter += mx_quicksort(arr, left, fp);
        counter += mx_quicksort(arr,fp+1,right);
    }
    return counter;
}

// int main() {
//     int arr4[]=  {19,83,68,-20,2,-6};
//     //int arr4[] = {53, 79, -30, -25, -18, -28, -3};
//     //int arr4[] = {-23, 19, 10, 22, 33, 19, 39}; 
//     //int arr4[] = {10}; 
//     //int arr4[] = {25, 67, -4, 2, 37, 20, 3, -11, 79, 69};
//     //int arr4[] = { 83, -2, 34, -3, 20, 54, 86, 60, 73, 52};// incorrect
//     //int arr4[] = {25, 67, -4, 2, 37, 20, 3, -11, 79, 69};
//     //int arr4[] = { 33, 19, 39, 47, 10, 63, 69, 48, 26, 25, 67, -4, 2};
//     //int arr4[] = { -6, -9, 27, 41, 38, -13, 8, 67 };
//     //int *arr4 = NULL;
//     int right = 5;
//     printf("%d\n",mx_quicksort(arr4, 0, 5)); // returns 3
//     for(int k = 0; k <= right; k++) {
//     printf("%d\n",arr4[k]);
//     }
// }
