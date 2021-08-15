#include "uls.h"

void mx_option_err (char a) {
    mx_printerr("uls: illegal option -- ");
    write(2,&a,1);
    mx_printerr(" usage: uls [-l] [file ...]\n");
    exit(1);
}

