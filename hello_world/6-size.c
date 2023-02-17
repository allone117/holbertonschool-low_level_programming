#include <stdio.h>
/**
 * main - Prints the size of various types based on
 * the computer it is compile and run on..
 * Return: program return to 0.
 */

{
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n" sizeof(long long int));
    pirntf("Size of float: %zu bytes\n", sizeof(float));
    return (0);
}
