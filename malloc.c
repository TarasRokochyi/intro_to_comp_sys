#include <stdio.h>
#include <stdlib.h>
#define TOTAL_FLIGHTS 100

struct flightType{
    char flightNum[7];
    int altitude;
    int longitude;
    int latitude;
    int heading;
    double airSpeed;
};

typedef struct flightType Flight;

int Collide(Flight *planeA, Flight *planeB);
void PotentialCollisions(Flight planes[]);


void main(){
    int airbornePlanes;
    Flight *planes;

    printf("How many planes are in the air?: ");
    scanf("%d", &airbornePlanes);

    /*allocates memory in heap*/
    planes = (Flight *) malloc(sizeof(Flight) * airbornePlanes);
    if (planes == NULL){
        printf("Error in allocating the planes array\n");
        exit(1);
    }
    
    /*allocates memory in heap and initializes to zero*/
    planes = (Flight *) calloc(sizeof(Flight) * airbornePlanes);

    /*tries to allocate new memory for size greater by 1 than previous*/
    planes = (Flight *) realloc(planes, sizeof(Flight) * (airbornePlanes + 1))

    PotentialCollisions(planes)
}

int Collide(Flight *planeA, Flight *planeB){
    if (planeA->altitude == planeB->altitude){
        return 1
    }
    return 0
}

void PotentialCollisions(Flight planes[]){
    for(int i = 0; i < TOTAL_FLIGHTS; i++){
        for(int j = 0; j < TOTAL_FLIGHTS; j++){
            if (Collide(&planes[i], &planes[j])){
                printf("Flights %s and %s are on collisions course!\n", planes[i].flightNum, planes[j].flightNum)
            }
        }
    }
}

