#include "main.h"

/**
 * _isupper - checks if it is upper case
 *
 * @c:takes an int value and converts  to ascii aphabet char
 *
 * Return: returns 1 or 2 if its is a uppercase char
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
