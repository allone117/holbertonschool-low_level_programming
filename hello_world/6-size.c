#include <studio.h>
/**
 * main - prints the size of types compile and run
 * Return: program return to 0
 */

int main(void)
{
    printf("Size of char: %zu byte\n", sizeof(char));

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n" sizeof(long long int));
    prntf("Size of float: %zu bytes\n", sizeof(float));
    
    return (0);

}
