#include "main.h"

struct dog {
    char name[50];
    float age;
    char owner[50];
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}
