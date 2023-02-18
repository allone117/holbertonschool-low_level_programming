#include <stdio.h>
/**
 * main - A programm that prints the size of computer types.
 * Compile and run on...
 * Return: program#include <stdio.h>
/**
 * main - A programm that prints the size of computer types.
 * Compile and run on...
 * Return: programm return to 0.
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %zu byte(s)\n", sizeof(a));
printf("Size of int: %zu byte(s)\n", sizeof(b));
printf("Size of a long int: %zu byte(s)\n", sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", sizeof(d));
printf("Size of float: %zu byte(s)\n", sizeof(f));

return (0);
}
