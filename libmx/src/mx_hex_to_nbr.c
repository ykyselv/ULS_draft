#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long result = 0;
    int length = mx_strlen(hex);
    double hexstepin;

    if(hex == NULL || length == 0)
        return 0;

    hexstepin = mx_pow(16, length - 1);

    for (int i = 0; hex[i] != '\0'; i++) {
        if(hex[i] >= 48 && hex[i] <= 57)
            result = result + (hex[i] - 48) * hexstepin;        
        if (hex[i] >= 65 && hex[i] <= 70)
            result = result + (hex[i] - 55) * hexstepin; 
        if (hex[i] >= 97 && hex[i] <= 122)
            result = result + (hex[i] - 87) * hexstepin;  
    hexstepin = hexstepin / 16;
    }
    return result;
}



// int main() {
// printf("%lu\n",mx_hex_to_nbr("C4")); //returns 196
// printf("%lu\n",mx_hex_to_nbr("FADE")); //returns 64222
// printf("%lu\n",mx_hex_to_nbr("ffffffffffff")); //returns 281474976710655
// printf("%lu\n",mx_hex_to_nbr(NULL));
// }

