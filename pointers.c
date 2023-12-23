#include <stdio.h>

void swap(int *el1, int *el2);

void main(){
    int a = 4;
    int b = 3;

    printf("%p\n", &a);
    
    swap(&a, &b);

    printf("after swap\n");
    printf("a = %d, b = %d\n", a, b);

}

void swap(int *el1, int *el2){
    printf("%d\n", (*el1-1));
    printf("%d\n", el1);
    int temp = *el1;
    printf("%d\n", temp);
    *el1 = *el2;
    *el2 = temp;
}