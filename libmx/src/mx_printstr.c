#include "../inc/libmx.h"

void mx_printstr(const char *s) {
    if (s == NULL) {
        return;
    }
    // for (int i = 0; s[i] != '\0'; i++) 
    //     write(1, &s[i], 1);
    write(1, s, mx_strlen(s));
}

// int main() {
//     const char s[] = "HELLO\n";
//     mx_printstr(s);
// }
