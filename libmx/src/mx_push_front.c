#include "../inc/libmx.h"

t_list *mx_create_node (void *data);

void mx_push_front(t_list **list, void *data) {
    
    t_list *front = mx_create_node(data); // создали новую переменную(указатель на структуру)

    if (*list == NULL) 
        *list = front;
    else {
        front -> next = *list;
        *list = front;
    }
}

// int main() {
//     char* data = "ksjldhfls";
//     t_list* list = mx_create_node((void*) data);
//     printf("%s\n", (char*)list->data);
// }




