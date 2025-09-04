#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d){
    if (d->name != NULL && d->owner != NULL){
        printf("Name: %s\n", d->name);
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner);
    }
}
