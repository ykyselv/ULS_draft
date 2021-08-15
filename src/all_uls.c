#include "uls.h"

void all_uls(t_uls *uls, t_file *file, t_flags *flags, char *namedir, int argc, char **argv) {
   
    mx_parce_all_files(uls, namedir);
    uls->all_visible_files_path = (char**)malloc(sizeof(char*)*uls->all_visible_files_num);
    uls->all_unvisible_files_path = (char**)malloc(sizeof(char*)*uls->all_unvisible_files_num);

    mx_path_to_file(uls, file, flags, namedir);

    if (uls->flags_counter == 0) {
        mx_ls_without_flags(uls, file);
    }

    if (flags->one == 1 && flags->a == 0 && flags->t == 0)
        mx_flag_one(uls, file, flags);

    if((flags->l == 1 && flags->t == 0 && flags->one == 0) || (flags->n == 1 && flags->t == 0 && flags->one == 0)) {
        mx_flag_l_and_n(file, uls, flags);
    }

    for (int k = 0; k < uls->all_visible_files_num; k++)
        mx_strdel (&uls->all_visible_files[k]);
    for (int k = 0; k < uls->all_unvisible_files_num; k++)
        mx_strdel (&uls->all_unvisible_files[k]);
    for (int k = 0; k < uls->all_unvisible_files_num; k++)
        mx_strdel (&uls->all_unvisible_files_path[k]);
    for (int k = 0; k < uls->all_visible_files_num; k++)
        mx_strdel (&uls->all_visible_files_path[k]);

        free(uls->all_visible_files);
        free(uls->all_unvisible_files);
        free(uls->all_visible_files_path);
        free(uls->all_unvisible_files_path);
}
