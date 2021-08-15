#include "uls.h"

char *mx_get_link_to_file(char *path, char *name) {
    char buff[256] = {0};

    readlink(path, buff, 255);
    return mx_strjoin("-> ", buff);
}
