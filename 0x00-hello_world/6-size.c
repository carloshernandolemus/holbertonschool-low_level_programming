#include <stdio.h>
/**
 * main - Star the code
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n" sizeof(long long int));
	printf("Size of a float: %d byte(s)\n" sizeof(float));
	return (0);
}
