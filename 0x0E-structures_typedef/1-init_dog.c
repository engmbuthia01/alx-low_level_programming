#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the struct
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner of dog
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d == NULL)
    ;
  else
    {
      d->name = name;
      d->age = age;
      d->owner = owner;
    }
}
