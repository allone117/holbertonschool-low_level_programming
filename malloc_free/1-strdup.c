#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicate
 */

char *_strdup(char *str)
{
	char *dub;
	int a = 0, s = 1;

	if (str == NULL)
		return (NULL);

	while (str[s])
	{
		s++;
	}

	dub = malloc((sizeof(char) * s) + 1);

	if (dub == NULL)
		return (NULL);

	while (a < s)
	{
		dub[a] = str[a];
		a++;
	}

	dub[a] = '\0';
	return (dub);
}
