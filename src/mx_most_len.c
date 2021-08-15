#include "uls.h"

int mx_most_len(char **s, t_uls *uls) {
    int *counter = (int*) malloc(sizeof(int) * uls->all_files_num);

    for (int i = 0; i < uls->all_files_num; i++) {
        counter[i] = mx_strlen(s[i]);
    }
    int max = counter[0];

    for (int j = 1; j < uls->all_files_num; j++) {
        if (max < counter[j]) {
            max = counter[j];
        }
    }
    return max;
}

