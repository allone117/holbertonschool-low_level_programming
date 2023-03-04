#include "main.h"

/**
 * _memcpy - copy memory erea
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 * Return: memory area replace
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}

	return (dest);
}
