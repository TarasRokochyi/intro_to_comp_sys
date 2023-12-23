#include <stdio.h>

void insertion_sort(int list[]);

void main(){

    int array[10] = {4,2,6,5,7,1,3,8,9};

    insertion_sort(array);

    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
}


void insertion_sort(int list[]){

    int sorted;
    int unsorted;
    int unsortedItem;

    for(unsorted = 1; unsorted < 10; unsorted++){
        unsortedItem = list[unsorted];

        for(sorted = unsorted -1; (sorted >= 0) && (list[sorted] > unsortedItem); sorted--){
            list[sorted + 1] = list[sorted];
        }
        list[sorted + 1] = unsortedItem;
    }
}
