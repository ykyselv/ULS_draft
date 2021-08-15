#include <uls.h>

void mx_parce_arguments (int argc, char ** argv, t_uls *uls, t_flags *flags) {
    uls->address_counter = 0;

    for(int j = 1; j < argc; j++) {
         if(argv[j][0] != '-') {
            uls->address_counter++;
         }
    }
    
    int k = 0;
    uls->address = (char **)malloc(sizeof(char*) * uls->address_counter);
    for(int i = 1; i < argc; i++) {
        if(argv[i][0] != '-') {
            uls->address[k] = mx_strdup(argv[i]);
            k++;
        }
        else if (argv[i][0] == '-') {
            mx_flag_parcing(argc, argv, uls, flags);
        }
    }
}


