#include "main.h"

/**
 * positive_or_negative - Enrty point
 *
 * @i: takes a positive or negative integer
 *
 * checks if code is positive or negative
 *
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
