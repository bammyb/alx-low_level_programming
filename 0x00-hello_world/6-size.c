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
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	/*print size of int*/
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	/*print size of long*/
	printf("Size of a long int: %ld byte(s)\n", sizeof(long));
	/*print size of long long int*/
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	/*print size of float*/
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
