#include <stdio.h>
/**
 * main - Prints the size of various types based on
 * the computer it is compile and run on..
 * Return: program return to 0.
 */
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
pirntf("Size of float: %d byte(s)\n", sizeof(float));
return (0);
}
