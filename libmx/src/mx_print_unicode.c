#include "../inc/libmx.h"

void mx_print_unicode (wchar_t c) {
    
    if (c <= 127)
        write(1,&c,1);
    else if (c <= 2047) {
        char unicode[2];
        unicode [0] =  (c >> 6 & 0x1F) | 0xc0;
        unicode [1] = (c >> 0 & 0x3F) | 0x80;
        write (1,unicode,2);
    }
    else if (c < 65536) {
        char unicode[3];
        unicode [0] = (c >> 12 & 0x0F) | 0xe0;
        unicode [1] = (c >> 6 & 0x3F) | 0x80;
        unicode [2] = (c >> 0 & 0x3F) | 0x80;
        write (1, unicode, 3);
    }
    else {
        char unicode[4];
        unicode[0] = (c >> 18 & 0x07) | 0xf0;
        unicode [1] = (c >> 12  & 0x3F) | 0x80;
        unicode [2] = (c >> 6 & 0x3F) | 0x80;
        unicode [3] = (c >> 0 & 0x3F) | 0x80;
        write(1, unicode, 4);
    }
}
