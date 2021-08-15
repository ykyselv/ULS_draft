#include "../inc/libmx.h"

int mx_strlennum(int nbr) {
    int count = 0;
    if (nbr <= 0 ) {
        nbr *= -1;
        count++;
    }
    while(nbr != 0) {
        nbr /= 10;
        count++;    
    }
    return count;
}
