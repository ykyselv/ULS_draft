#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    char *new = (char*)malloc(sizeof(char) * (size +1));
    int len = malloc_size(ptr);

    if (ptr == NULL || size <=0) 
        return NULL;
    if (len > (int) size)
        return ptr;
    if (len < (int) size) 
        new = mx_memcpy(new, ptr, size);
    free(ptr);
    return new;
}


// void *mx_realloc(void *ptr, size_t size) {
//     size_t len = malloc_size(ptr);
//     unsigned char *new_pointer = NULL;

//     if ((int)size < 0)
//         return NULL;
//     if (size != 0 && len > size)
//         return (char*) ptr;
//     new_pointer = malloc(size);
//     if (ptr != NULL && size != 0)
//         new_pointer = mx_memcpy(new_pointer, ptr, size);
//     //free(ptr);
//     return (void*)new_pointer;
// }


// int main() {
//     char *ptr = (char*)malloc(sizeof(char) * (3));
//     ptr[0] = 'h'; ptr[1] = 'x'; ptr[2] = '\0';
//     // ptr = "hello";
//     size_t size = 8;
//     printf("%s\n",mx_realloc(ptr, size));
// }
