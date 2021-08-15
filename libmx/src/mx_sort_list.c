#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    t_list *buff = lst;
    void *tmp;

    for (int i = 0; i < mx_list_size(lst) - 1; i++) {
        buff = lst;
        for (int j = 0; j < mx_list_size(lst) - 1; j++) {
            if (cmp(buff->data, buff->next->data)) {
                tmp = buff->next->data;
                buff->next->data = buff->data;
                buff->data = tmp;
            }
            buff = buff->next;
        }
    }
    return lst;
}


// int main() {
//     t_list *lst = mx_create_node ("aaaaaaaaa");
//     mx_push_back(&lst, "aaa");
//     mx_push_back(&lst, "aaabbb");
//     mx_push_back(&lst, "bbbb");
//     mx_push_back(&lst, "ppppp");
//     mx_push_back(&lst, "hhh");
//     mx_push_back(&lst, "iiiii");
//     mx_push_back(&lst, "vvv");
//     // while(lst->next != NULL) {
//     //     printf("%s\n",lst->data);
//     //     lst=lst->next;
//     // }
//     mx_sort_list(lst, cmp);
//     t_list *ls = mx_sort_list(lst, cmp);
//     while(ls != NULL) {
//         printf("%s\n",ls->data);
//         ls=ls->next;
//     }
// }





