#include "main.h"

/**
 * _isdigit - checks if parameter is digit
 *
 * @c: takes an integer input and checks if it is a digit
 *
 * Return: 1 if it is a digit 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
