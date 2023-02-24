#include "main.h"

/**
 * _abs - print the value without any signs
 *
 * @a: takes integer value
 *
 * Return: returns the value of the a
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a > 0)
	{
		a = a;
	}
	return (a);
}
