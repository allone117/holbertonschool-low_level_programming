#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%5\n", s1);
	printf("%5", s2);
	ptr = _strcat(s1, s2);
	printf("%5", s1);
	printf("%5", s2);
	printf("%5", ptr);
	return (0);

}
