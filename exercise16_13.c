/*push to stack and pop from stack*/

#include <stdio.h>
#define STACK_SIZE 100

int stack[STACK_SIZE];
int topOfStack = 0;

int Push(int item);
int Pop();

void main(){
    int item;
    int command;

    while(1){
        
        printf("enter 0 - push, 1 - pop, 2 - quit: ");
        scanf("%d", &command);
        switch (command)
        {
        case 0:
            printf("enter number to push: ");
            scanf("%d", &item);
            if(Push(item)){
                printf("there is a problem\n");
            }
            else{
                printf("item pushed succesfully\n");
                for(int i = 0; i < topOfStack; i++){
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
            break;
        
        case 1:
            if(Pop()){
                printf("stack is full\n");
            }
            else{
                printf("item poped succesfully\n");
                for(int i = 0; i < topOfStack; i++){
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
            break;

        case 2:
            return;
            break;
       
        }
    }
}

int Push(int item){
    if (topOfStack > STACK_SIZE){
        return 1;
    }
    stack[topOfStack] = item;
    topOfStack++;
    return 0;
}

int Pop(){
    if(topOfStack <= 0){
        return 1;
    }
    topOfStack--;
    return 0;
}