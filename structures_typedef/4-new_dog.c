#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner){
    dog_t *dog;
    dog = malloc(sizeof(dog_t));
    if (dog == NULL) {
        return (NULL);
    }
    dog->name = strdup(name);
    if (dog->name == NULL){
        free(dog);
        return (NULL);
    }

    dog->age = age;

    dog->owner = strdup(owner);
    if (dog->owner == NULL){
        free(dog->name);
        free(dog);
        return (NULL);
    }
    return (dog);
;}
