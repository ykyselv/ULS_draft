#include "../inc/libmx.h"

t_list *mx_create_node (void *data);
void mx_push_back (t_list **list, void *data);


int mx_list_size(t_list *list) {
    t_list *new = list;
    int counter = 0;

    if(list == NULL)
        return 0;
    while (new != NULL) {
        counter++;
        new = new->next;
    }
    return counter;
}

// int main() {
//     t_list *list = mx_create_node("jkl;lkjhghjkl");
//     mx_push_back(&list, "aaaaaa");
//     mx_push_back(&list, "bbbbb");
//     mx_push_back(&list, "kkkkkk");
//     mx_push_back(&list, "eeeeee");
//     printf("%d\n", mx_list_size(list));
// }





