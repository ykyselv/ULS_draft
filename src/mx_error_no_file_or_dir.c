#include "uls.h"

void mx_error_no_file_or_dir(char *name) {
    mx_printerr("uls: ");
    mx_printerr(name);
    mx_printerr(": ");
    mx_printerr("No such file or directory");
}

