#include "function_pointers.h"
#include <stdio.h>
#include "main.h"

/**
 * print_name - prints a name
 * @name: string to add
 * @f: pointer to a function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}

