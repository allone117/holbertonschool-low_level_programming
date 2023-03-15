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
	int len;
	int i;

	if (str == NULL)
		return (NULL);

	len = strlen (str) + 1
		dup = malloc(len)

		if (dup == NULL)
			return (NULL)

				for (i = 0; i < len; i++)
				{
					dup[i] = str[i]
				}
	dup[len] = '\0'
		return (dub);
}
