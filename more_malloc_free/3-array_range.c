#include "main.h"
#include <stdlib.h>

/**
 * array_range - crate array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: integer value
 */

int *array_range(int min, int max)
{
int *v, x = 0;

if (min > max)
return (NULL);

v = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (v == NULL)
return (NULL);

while (min <= max)
{
v[x] = min;
x++;
min++;
}
return (v);
}
