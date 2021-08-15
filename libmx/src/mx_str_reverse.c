#include "../inc/libmx.h"

void mx_str_reverse (char *s) {
    int j = mx_strlen(s)-1; 
    int i = 0;
    char temp;

    if ( s == NULL || mx_strlen(s) == 0)
        return;
    for(; i <=(mx_strlen(s)-1)/2;i++,j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
    }
}


// int main() {
// char s[]= "Hello world";
// mx_str_reverse(s);  
// printf("%s\n", s);
// }
