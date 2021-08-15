#include "uls.h"

void mx_ls_without_flags(t_uls *uls, t_file *file) {
 
    for (int i = 0; i < uls->all_visible_files_num; i++) {
        mx_printstr(uls->all_visible_files[i]);
        if (isatty(STDOUT_FILENO) != 0)
            mx_printchar('\t');
        else 
            mx_printchar('\n');
    }
    mx_printchar('\n');
}
