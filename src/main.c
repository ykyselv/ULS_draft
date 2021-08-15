#include "uls.h"

int main(int argc, char **argv) {

    t_uls *uls = (t_uls *)malloc(sizeof(t_uls));
    t_flags *flags = (t_flags *)malloc(sizeof(t_flags));
    t_file *file = (t_file *)malloc(sizeof(t_file));

    flags->one = 0;
    flags->A = 0;
    flags->a = 0;
    flags->C = 0;
    flags->c = 0;
    flags->F = 0;
    flags->f = 0;
    flags->G = 0;
    flags->h = 0;
    flags->l = 0;
    flags->m = 0;
    flags->n = 0;
    flags->p = 0;
    flags->R = 0;
    flags->r = 0;
    flags->S = 0;
    flags->T = 0;
    flags->t = 0;
    flags->u = 0;

    mx_parce_arguments (argc, argv, uls, flags);

    if (uls->address_counter == 0) {
        uls->address[0] = mx_strdup(".");
        all_uls(uls, file, flags, uls->address[0], argc, argv);
    }
    for (int i = 0; i < uls->address_counter; i++) {
        if(uls->address_counter > 1) {
            mx_printstr(uls->address[i]);
            mx_printchar(':');
            mx_printchar('\n');
        }
        all_uls(uls, file, flags, uls->address[i], argc, argv); 
    }
    // system ("leaks -q uls"); 
}




