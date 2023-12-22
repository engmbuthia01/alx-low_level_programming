#include "main.h"

/**
 * positive_or_negative - determine whether number is positive, zero or negative
 * 0: number to be checked
 * Retrun: 0 (Success)
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
