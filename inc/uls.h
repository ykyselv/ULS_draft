#pragma once

#include "libmx.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <uuid/uuid.h>
#include <sys/ioctl.h>

#define FLAGS "@1AaCcFfGhlmnpRrSTtu\0"
#define FLAGS_NUM 21
// #define S_ISVTX 0001000
// #define S_ISSOCK 0140000
#define _XOPEN_SOURCE

#define BOLD      "\x1B[1m"
#define RED       "\x1B[31m"
#define GRN       "\x1B[32m"
#define YEL       "\x1B[33m"
#define BLU       "\x1B[36m"
#define MAG       "\x1B[35m"
#define RESET     "\x1B[0m"
#define BLK_F_RED_B "\x1B[0;30;41m"
#define BLK_F_CYAN_B "\x1B[0;30;46m"
#define BLOCK "\x1B[0;34;46m"
#define CHR "\x1B[0;34;43m"
#define DIR_T "\x1B[0;30;42m"
#define DIR_X "\033[0;30;43m"


typedef struct s_uls {
    int all_unvisible_files_num;
    char **all_visible_files;
    char **all_unvisible_files;
    int all_visible_files_num;
    int all_files_num;
    char *flags;
    char **address;
    int address_counter;
    char **all_visible_files_path;
    char **all_unvisible_files_path;
    int flags_counter;
    long *time;
    // char **all_files;
    // char **all_files_path;
}              t_uls;


typedef struct s_file {
    struct stat statfile;
    char permissions[13];
}              t_file;


typedef struct s_flags {
    bool one;
    // все файлы кроме: . и ..
    bool A;
    // все файлы, включая файлы с . и ..
    bool a;
    // вывод в неск колонок с сортировкой по колонкам
    bool C;
    // вместо времени посл. изменения использовать время последней модификации
    // описателя файла(т.е время создания файла, изменение режима доступа к нему)
    // для сортировки(с флагом -t) или для вывода(с флагом -l)
    bool c;
    // если файл является каталогом, то выдавать после его имени символ /;
    // если это выполняемый файл - то *.
    bool F;
    // Рассматривать каждый аргумент как каталог и выводить его содержимое. 
    // Этот флаг отменяет флаги -l, -t, -s, -r и включает флаг -a. 
    // Сортировка имен файлов не производится; имена выдаются в таком порядке, в каком они перечислены в каталоге.
    // То есть выводит содержимое каталога в виде файлов (без подсветки)
    bool f; 
    // без группы, не печатать имя группы
    bool G; 
    bool h; 
    bool l; 
    // вывод в свободном формате, имена файлов разделены запятыми
    bool m; 
    bool n;
    // если файл является каталогом, 
    // то выводить после его имени символ /.
    bool p; 
    // рекурсивно обойти все подкаталоги
    bool R;
    // изменить порядок сортировки  на обратный алфавитный,
    // если добавлет флаг -t, то по времени(сначала идут старые файлы)
    bool r; 
    bool S; 
    bool T;
    // имена файлов сортируются не по алфавиту, 
    // а по времени (сначала самые новые)
    bool t;
    // вместо времени последнего изменения использовать время
    // последнего доступа для сортировки(с флагом -t) или для вывода (-l)
    bool u; 
}               t_flags;


// void mx_flag_parcing (int argc, char **argv, t_uls *uls);
void mx_parce_arguments (int argc, char ** argv, t_uls *uls, t_flags *flags);
void mx_option_err(char a);
void mx_error_no_file_or_dir(char *name);
void mx_parce_all_files(t_uls *uls, char *dirname);
void mx_ls_without_flags(t_uls *uls,t_file *file);
char** mx_char_bubble_sort(char **arr, int size);
void mx_path_to_file(t_uls *uls, t_file *file, t_flags *flags, char *namedir);
// char my_bubble_sort(char **arr, int size);
void mx_set_flags(char fl, t_flags* flags);
void mx_flag_parcing (int argc, char **argv, t_uls *uls, t_flags* flags);
char *permissions (t_file *fil);
void mx_flag_a(t_uls *uls, t_flags *flags, t_file *file, int argc, char **argv);
void mx_time(t_uls *uls, t_flags *flags, t_file *file);
void mx_get_id(t_file *file, t_flags *flags); 
char *mx_get_size(t_uls *uls, t_flags *flags, t_file *file);
void most_long(t_uls *uls);
void mx_terminal_size (int argc, char **argv);
char *mx_get_links_num (t_file *file);
char **mx_char_bubble_sort_reverce(char **arr, int size);
void mx_flag_l_and_n(t_file *file, t_uls *uls, t_flags *flags);
void mx_flag_r(t_file *file, t_uls *uls, t_flags *flags);
void mx_flag_one(t_uls *uls, t_file *file, t_flags *flags);
// void mx_flag_t (t_uls *uls, t_flags *flags, t_file *file);
void mx_flag_G(t_uls *uls, t_file *file, t_flags *flags);
void mx_flag_t (t_uls *uls, t_flags *flags, t_file *file, char *namedir);
void all_uls(t_uls *uls, t_file *file, t_flags *flags, char *namedir, int argc, char **argv);
int mx_get_blocks (t_file *file, t_uls *uls, t_flags *flags);
int mx_terminal_col(int argc, char **argv);
void mx_print_columns(char **array, int cols, t_uls *uls);
int mx_most_len(char **s, t_uls *uls);
char *mx_get_link_to_file (char *path, char *name);
// void mx_terminal_size (int argc, char **argv);
