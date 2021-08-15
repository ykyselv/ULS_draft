#include "uls.h"

char *mx_get_links_num (t_file *file) {
    char *result = mx_itoa(file->statfile.st_nlink);
    return result;
}

