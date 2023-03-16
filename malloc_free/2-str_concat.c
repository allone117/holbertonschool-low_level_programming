#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: the two string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, z = 0, x = 0, q = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[z])
		z++;

	q = a + z;
	s = malloc((sizeof(char) * q) + 1);

	if (s == NULL)
		return (NULL);

	z = 0;

	while (x < q)
	{
		if (x <= a)
			s[x] = s1[x];

		if (x >= a)
		{
			s[x] = s2[z];
			z++;
		}

		x++;
	}

	s[x] = '\0';
	return (s);
}
