#include "uls.h"

static void mx_check_flags(t_uls *uls, char *argv,t_flags *flags, int *count) {
    int argv_len = mx_strlen(argv);
    int j = 1;
    int i;
    int counter;
   
    while (j < argv_len) {
        i = 0;
        counter = 0;
        while (FLAGS[i]!='\0') {
            if(argv[j] == FLAGS[i]) {
                uls->flags[*count] = argv[j];
                mx_set_flags(argv[j], flags);
                (*count)++;
                counter++;
                j++;
            }
            i++;
        }
    if(counter == 0)
         mx_option_err(argv[j]);
    }
}

void mx_flag_parcing (int argc, char **argv, t_uls *uls, t_flags* flags) {
    int count = 0;

    for(int i = 1; i < argc && argv[i][0]=='-'; i++) {
        if(argv[i][0] == '-' && argv[i][1] != '\0')
            mx_check_flags(uls, argv[i], flags, &count);
    }
    uls->flags_counter = count;
}
