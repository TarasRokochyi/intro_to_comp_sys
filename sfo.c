#include <stdio.h>

int AllSum(int n);

int main() {

    int in; 
    int sum;

    printf("Input a number: ");
    scanf("%d", &in);
    printf("%d" ,in);

    sum = AllSum(in);
    printf("The AllSum of %d is %d\n", in, sum);

}

int AllSum(int n) {

    int result = 0;
    int i; 

    for (i = 1; i <= n; i++){
        result = result + i;
    }  

    return result; 
}