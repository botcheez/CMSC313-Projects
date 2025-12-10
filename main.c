#include <stdio.h>
#include <stdlib.h>

//car behaviors with function pointers

typedef struct Vehicle {
    void (*startEngine)(void);
    void (*accelerate)(void);
    void (*brake)(void);
} Vehicle;

//car functions

void car_startEngine(void) {
    printf("Engine started!\n");
}

void car_accelerate(void) {
    printf("Car: Pressing gas pedal...\n");
}

void car_brake(void) {
    printf("Car: Applying brakes...\n");
}

//function for creating a car object
Vehicle* createCar(void) {
    Vehicle* v = malloc(sizeof(Vehicle));
    if (!v) return NULL;

    v->startEngine = car_startEngine;
    v->accelerate = car_accelerate;
    v->brake = car_brake;

    return v;
}

int main() {

    //same as creating a new object instantiation in c++
    Vehicle* myCar = createCar();

    if (!myCar) {
        printf("Error creating car.\n");
        return 1;
    }

    myCar->startEngine();
    myCar->accelerate();
    myCar->brake();

    //same as deallocating the memory for the car object in c++
    free(myCar);

    return 0;
}
