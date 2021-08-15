#include "../inc/libmx.h"

int mx_sqrt(int x) {
    int i = 0;
    
    if (x <= 0) 
        return 0;
    while (i * i <= x && i * i >= i) {
        if (i * i == x)
            return i;
    i++;
    }
    return 0;
}

// int main() {
//     printf("%d\n",mx_sqrt(2147483647));
// }
