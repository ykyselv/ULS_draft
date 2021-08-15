#include "uls.h"

int mx_terminal_col(int argc, char **argv) {
    struct winsize wind;
    ioctl(1, TIOCGWINSZ, &wind);

    return wind.ws_col;
}


