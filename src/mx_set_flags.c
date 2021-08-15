#include "uls.h"

void mx_set_flags(char fl, t_flags* flags) {
        if (fl == '1') 
            flags->one = 1;
        else if (fl == 'A')
            flags->A = 1;
        else if (fl == 'a')
            flags->a = 1;
        else if (fl == 'C')
            flags->C = 1;    
        else if (fl == 'c')
            flags->c = 1;
        else if (fl == 'F')
            flags->F = 1;
        else if (fl == 'f')
            flags->f = 1;
        else if (fl == 'G')
            flags->G = 1;
        else if (fl == 'h')
            flags->h = 1;
        else if (fl == 'l')
            flags->l = 1;
        else if (fl == 'm')
            flags->m = 1; 
        else if (fl == 'n')
            flags->n = 1;  
        else if (fl == 'p')
            flags->p = 1;  
        else if (fl == 'R')
            flags->R = 1;  
        else if (fl == 'r')
            flags->r = 1; 
        else if (fl == 'S')
            flags->S = 1;
        else if (fl == 'T')
            flags->T = 1;    
        else if (fl == 't')
            flags->t = 1; 
        else if (fl == 'u')
            flags->u = 1; 
        else 
            mx_option_err(fl);
}



