#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    t_list *current = NULL;

    if (head == NULL || *head == NULL)
        return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    }
    else {
        current = *head;
        while (current->next->next != NULL)
            current = current->next;
        free(current->next);
        current->next = NULL;
    }
}
// int main() {
//     t_list *head = mx_create_node("fghjklkjhgffgh");
//     mx_push_back (&head, "nnnnnnnn");
//     mx_push_back (&head, "hhhhhhh");
//     mx_push_back (&head, "aaaaaaa");
//     t_list *copy = head;
//     while (copy) {
//         printf("%s\n",copy ->data);
//         copy = copy ->next;
//     }
//     printf("\n");

//     mx_pop_back(&head); 
//     copy = head;
//     while (copy) {
//         printf("%s\n",copy ->data);
//         copy = copy ->next;
//     } 
// }



