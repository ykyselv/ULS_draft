#include "uls.h"

void mx_flag_l_and_n(t_file *file, t_uls *uls, t_flags *flags) {
    char *res = permissions(file);
    char *tmp = NULL;

    mx_printstr ("total ");
    mx_printint (mx_get_blocks (file, uls, flags));
    mx_printchar ('\n');

        if(flags->a == 0 && flags->r == 0 && flags->t == 0) {
            for(int k = 0; k < uls->all_visible_files_num; k++) {
                lstat(uls->all_visible_files_path[k], &file->statfile);
                    mx_printstr(permissions(file)); 
                    tmp = mx_get_links_num (file);
                    mx_printstr(tmp);   
                    mx_strdel(&tmp);
                    mx_printchar(' ');
                    mx_get_id(file, flags); 
                    tmp = mx_get_size(uls, flags, file);
                    mx_printstr(tmp);
                    mx_strdel(&tmp);
                    mx_printchar(' ');
                    // tmp = mx_time(uls,flags, file);
                    mx_time(uls,flags, file);
                    // mx_strdel(&tmp);
                    mx_printchar(' ');

                    if (S_ISLNK(file->statfile.st_mode)) {
                        mx_printstr (uls->all_visible_files[k]);
                        mx_printchar(' ');
                        tmp = mx_get_link_to_file (uls->all_visible_files_path[k], uls->all_visible_files[k]);
                        mx_printstr (tmp);
                        mx_strdel(&tmp);
                        mx_printchar('\n');
                    }
                    else {
                        mx_printstr (uls->all_visible_files[k]);
                        mx_printchar('\n');
                    }
            }
        }
}
