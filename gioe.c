#include <stdio.h>

struct node {
    int count;
    struct node *next;
};

int main(){
    int data = 0;
    struct node node1;
    struct node *getdata = &node1;

    getdata->count = data + 1;
    printf("%d", getdata->count);
}