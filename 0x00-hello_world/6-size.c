#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program prints size of  various types'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*print size of char*/
	printf("Size of char: %ld byte\n", sizeof(char));
	/*print size of int*/
	printf("Size of int: %ld byte\n", sizeof(int));
	/*print size of long*/
	printf("Size of long int: %ld byte\n", sizeof(long));
	/*print size of long long int*/
	printf("Size of long long int: %ld byte\n", sizeof(long long int));
	/*print size of float*/
	printf("Size of float: %ld byte\n", sizeof(float));
	return (0);
}
