#include "main.h"

/**
 * positive_or_negative - positive, zero or negative number
 * 0: check number
 * Return: 0 (Success)
 */

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
