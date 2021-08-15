#include "uls.h"

void mx_flag_one(t_uls *uls, t_file *file, t_flags *flags) {
 
    if (flags->G == 0) {
        for (int i = 0; i < uls->all_visible_files_num; i++) {
                mx_printstr(uls->all_visible_files[i]);
                mx_printchar('\n');
        }
    }
}
