#include "uls.h"

char *mx_get_user_id(t_file *file, t_flags *flags) {
    struct passwd *user;
    char *usid = NULL;

    user = getpwuid(file->statfile.st_uid);
    if (flags->n == 1) 
        usid = mx_itoa(user->pw_uid);
    else
        usid = mx_strdup(user->pw_name);
    return usid;
}

char *mx_get_group_id(t_file *file, t_flags *flags) {
    struct group *groupid;
    char *grid = NULL;
   

    groupid = getgrgid(file->statfile.st_gid);

    if (groupid != NULL && flags->n != 1)
        grid = mx_strdup(groupid->gr_name);
    else
        grid = mx_itoa(file->statfile.st_gid);

    return grid;
}

void mx_get_id(t_file *file, t_flags *flags) {

    char *user = mx_get_user_id(file, flags);
    char *group = mx_get_group_id(file, flags);
    mx_printstr(user);
    mx_printchar(' ');
    mx_printstr(group);
    mx_printchar(' ');
    free(user);
    free(group);
}

