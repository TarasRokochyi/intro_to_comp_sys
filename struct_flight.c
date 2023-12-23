#include <stdio.h>
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
    Flight planes[TOTAL_FLIGHTS];
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
