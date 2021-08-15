#include "uls.h"

static void mx_first_part(t_uls *uls, char *dirname) {
    DIR* newdir = opendir(dirname); 
    struct dirent* newdirent;
    int counter_visible = 0; 
    int counter = 0;
    int i = 0;
    
    while((newdirent = readdir(newdir)) != NULL) {
    
        if(newdirent->d_name[0] != '.' && 
            mx_strcmp(newdirent->d_name, "..") != 0 &&
            mx_strcmp(newdirent->d_name, ".") != 0) {
            counter_visible++;
            }
        else counter++;
    }

    uls->all_visible_files_num = counter_visible;
    uls->all_files_num = counter_visible + counter;
    uls->all_unvisible_files_num = counter ; 
    closedir(newdir);
    
    newdir = opendir(dirname);
    uls->all_visible_files = (char**) malloc(sizeof(char*) * uls->all_visible_files_num);
    while((newdirent = readdir(newdir)) != NULL) {
        if(newdirent->d_name[0] != '.' && 
            mx_strcmp(newdirent->d_name, "..") != 0 &&
            mx_strcmp(newdirent->d_name, ".") != 0) {
                uls->all_visible_files[i] = mx_strdup(newdirent->d_name); 
                i++;
        }
    }
    mx_char_bubble_sort(uls->all_visible_files, uls->all_visible_files_num);
    closedir(newdir);
}

static void mx_second_part(t_uls *uls, char *dirname) {
    DIR* newdir = opendir(dirname); 
    struct dirent* newdirent;
    int counter_visible = 0; 
    int counter = 0;
    int i = 0;

    uls->all_unvisible_files = (char**) malloc(sizeof(char*) *  uls->all_unvisible_files_num);
    
    while((newdirent = readdir(newdir)) != NULL) {
        if(newdirent->d_name[0] == '.' || 
            mx_strcmp(newdirent->d_name, "..") == 0 ||
            mx_strcmp(newdirent->d_name, ".") == 0) {
                uls->all_unvisible_files[i] = mx_strdup(newdirent->d_name); 
                i++;
            }
    }
    
    mx_char_bubble_sort(uls->all_unvisible_files, uls->all_unvisible_files_num);
    closedir(newdir);
}

void mx_parce_all_files(t_uls *uls, char *dirname) {

    mx_first_part(uls, dirname);
    mx_second_part(uls, dirname);
}




