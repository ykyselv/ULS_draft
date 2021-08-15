#include "uls.h"

static char *mx_strdup_special(const char *s) {
    char *dublicate = mx_strnew(13);
    int k = 0;
    for (int i = 4; i < 16; i++) {
        dublicate[k] = s[i];
        k++;
    }
    return dublicate;
}

static char *mx_strdup_sp(const char *s) {
    char *tempor = mx_strnew(4);
    int p = 0;
    char *dublicate = mx_strnew(9);
    int k = 0;
    for (int i = 4; i < 11; i++) {
        dublicate[k] = s[i];
        k++;
    }
    for (int i = mx_strlen(s) - 6; i < mx_strlen(s) - 1; i++) {
        tempor[p] = s[i];
        p++;
    }
    char *res = mx_strjoin(dublicate, tempor);

        mx_strdel(&tempor);
        mx_strdel(&dublicate);

    return res;
}

static char *mx_strdup_year(const char *s) {
    char *tempor = mx_strnew(4);
    int p = 0;
        for (int i = mx_strlen(s) - 5; i < mx_strlen(s); i++) {
        tempor[p] = s[i];
        p++;
    }
    return tempor;
}

void mx_time(t_uls *uls, t_flags *flags, t_file *file) {
    char *tmp = NULL;
    char *year = NULL;
    char *tmpyear = NULL;
    // char *yearn = "2021"
    
    year = mx_strdup_year(ctime(&file->statfile.st_mtime));
    tmp = mx_strdup_special(ctime(&file->statfile.st_mtime));
    tmpyear = mx_strdup_sp(ctime(&file->statfile.st_mtime));
    
    if(mx_strcmp(year, "2021") > 0) {
        mx_printstr(tmp);
    }
    else {
        mx_printstr(tmpyear);
    }
    mx_strdel(&year);
    mx_strdel(&tmp);
    mx_strdel(&tmpyear);
}
