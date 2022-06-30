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
	printf("Size of a char: %d byte(1)\n", sizeof(char));
	printf("Size of an int: %d byte(4)\n", sizeof(int));
	printf("Size of a long int: %d byte(8)\n", sizeof(long int));
	printf("Size of a long lont int: %d byte(16)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(1)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(4)\n", sizeof(long long int));
	printf("Size of a float: %d byte(8)\n", sizeof(float));
	return (0);
}
