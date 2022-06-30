#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(1));
	printf("Size of an int: %d byte(s)\n", sizeof(4));
	printf("Size of a long int: %d byte(s)\n", sizeof(8));
	printf("Size of a long lont int: %d byte(s)\n", sizeof(16));
	printf("Size of a float: %d byte(s)\n", sizeof(4));
	printf("Size of a char: %d byte(s)\n", sizeof(1));
	printf("Size of an int: %d byte(s)\n", sizeof(8));
	printf("Size of a long int: %d byte(s)\n", sizeof(1));
	printf("Size of a long long int: %d byte(s)\n", sizeof(4));
	printf("Size of a float: %d byte(8)\n", sizeof(8));
	return (0);
}
