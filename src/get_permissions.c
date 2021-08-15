#include "uls.h"

static char get_type (mode_t mode) {
    if (S_ISLNK(mode))
        return ('l');
    if (S_ISDIR(mode))
        return ('d');
    if (S_ISBLK(mode))
        return ('b');
    if (S_ISCHR(mode))
        return ('c');
    if (S_ISSOCK(mode))
        return ('s');
    if (S_ISFIFO(mode))
        return ('p');
    return ('-');
}


// ф-я для флага -l
char *permissions (t_file *fil) {
    char *str;
    mode_t m;
   
    str = fil->permissions;
    m = fil->statfile.st_mode;
// в нулевой симв записывается тип файла
    str[0] = get_type(m);
// владелец имеет право для чтения
    str[1] = (m & S_IRUSR) ? 'r' : '-';
// владелец имеет право записи
    str[2] = (m & S_IWUSR) ? 'w' : '-';
// владелец имеет право выполнения
    str[3] = (m & S_IXUSR) ? 'x' : '-';
// группа имеет право для чтения
    str[4] = (m & S_IRGRP) ? 'r' : '-';
// группа имеет право записи
    str[5] = (m & S_IWGRP) ? 'w' : '-';
// группа имеет право выполнения
    str[6] = (m & S_IXGRP) ? 'x' : '-';
// все прочие имеют право для чтения
    str[7] = (m & S_IROTH) ? 'r' : '-';
// все прочие имеют право записи
    str[8] = (m & S_IWOTH) ? 'w' : '-';
// все прочие имеют право выполнения
    str[9] = (m & S_IXOTH) ? 'x' : '-';
//  закрепляющий бит (файлы в этом каталоге могут быть удалены или переименованы
// только владельцем файла(каталога) и привелиг. процессом)
    str[9] = (m & S_ISVTX) ? 't' : str[9];
    str[10] = ' ';
    str[11] = ' ';
    str[12] = 0;

    return (str);
}




