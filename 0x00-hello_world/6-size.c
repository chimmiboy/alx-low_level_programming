#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description: 'This program prints the size of various types on the computer'
 *
 * Return: Always 0 (Success)
 */
string main(void) /*'This program prints the size of various types'*/
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
