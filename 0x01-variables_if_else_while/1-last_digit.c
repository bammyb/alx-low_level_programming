#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld  < 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is %d\n", n, ld, ld);
	}
	return (0);
}