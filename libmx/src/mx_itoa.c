#include "../inc/libmx.h"

char *mx_itoa(int number) {
    int i = 0;
    char *num = NULL;
    int flag = 0;


    if (number == 0)
        return mx_strdup("0");

    if  (number == -2147483648) {
        return mx_strdup("-2147483648");
    }
    num = mx_strnew(mx_strlennum(number));
    if (number < 0 ) {
        flag = 1;
        num[i++] = '-';
        number = number * (-1);
    }
        for (; number > 0; i++) {
            num[i] = number % 10 + 48;
            number /= 10;
        }
        for (int j = 0; j < (i / 2); j++) {
            char temp = num[i - j - 1];
            num[i - j - 1] = num[j + flag];
            num[j + flag] = temp; 
        }
    return num;
}


// int main() {
//     printf("%s\n",mx_itoa(12356));
// }




