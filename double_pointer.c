#include <stdio.h>

void main(){

    int apple;
    int *ptr;
    int **dptr;
    ptr = &apple;
    dptr = &ptr;
    **dptr = 123;

    dptr++;
    *ptr++;
    apple++;

    printf("%p %p %p\n", dptr, ptr, &apple);

}