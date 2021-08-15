#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double result = 1;

    for (unsigned int i = 0; i < pow; i++) {
        result = result *n;
    }
    return result;
}

// int main() {
// printf("%f\n",mx_pow(3, 3)); //returns 27
// printf("%f\n",mx_pow(2.5, 3)); //returns 15.625
// printf("%f\n",mx_pow(2, -1));
// }
