#include "uls.h"

char *mx_get_size(t_uls *uls, t_flags *flags, t_file *file) {
    char *result = NULL;
    double size_of_file = file->statfile.st_size;

    if(flags->l == 1)
        result = mx_itoa(size_of_file);

    return result;
}


