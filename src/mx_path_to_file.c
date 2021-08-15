#include "uls.h"

void mx_path_to_file(t_uls *uls, t_file *file, t_flags *flags, char *namedir) {

    if (mx_strcmp(namedir, "/") != 0) {
        namedir = mx_strjoin(namedir,"/");
    }
    for(int k = 0; k < uls->all_visible_files_num; k++) {
        uls->all_visible_files_path[k] = mx_strjoin(namedir, uls->all_visible_files[k]); 
    }
    for(int j = 0; j < uls->all_unvisible_files_num; j++) {
        uls->all_unvisible_files_path[j] = mx_strjoin(namedir,  uls->all_unvisible_files[j]); 
    }
    for(int p = 0; p < uls->all_files_num; p++) {
        mx_strdel(&namedir);
    }
}
