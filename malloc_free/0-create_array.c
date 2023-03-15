#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to fill in the array
 * Return: the array filled
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
a[i] = c;
}

return (a);
}
