#include "../inc/libmx.h"

int mx_strcmp(const char*s1, const char*s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
        int up = size - 1;
        int down = 0; 
        
        while (down <= up) {
            int mid = (up + down) / 2;
            (*count)++;
            if (mx_strcmp(arr[mid], s) == 0)
                return mid;
            else if (mx_strcmp(arr[mid], s) > 0) 
                up = mid-1;
            else if (mx_strcmp(arr[mid], s) < 0) 
                down = mid + 1;
            else 
                return mid;
        }
        *count = 0;
        return -1;
}

// int main() {
// char *arr[]= {"222", "Abcd", "aBc", "ab", "az", "z"};
// int count= 0;
// //int *count2 = &count;
// printf("%d\n",mx_binary_search(arr, 6, "az", &count)); //returns 3 and count = 3
// printf("%d\n", count);
// }

// count= 0;
// mx_binary_search(arr, 6, "aBc", &count); //returns 2 and count = 1
// count= 0;
// mx_binary_search(arr, 6, "aBz", &count); 

