#include "uls.h"

int mx_get_blocks(t_file *file, t_uls *uls, t_flags *flags) {
    int blocks = 0;

    for(int k = 0; k < uls->all_visible_files_num; k++) {
        stat(uls->all_visible_files_path[k], &file->statfile);
        blocks += file->statfile.st_blocks;
    }
    return blocks;
}

