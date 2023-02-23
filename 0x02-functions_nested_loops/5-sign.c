#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n:is taking int inut and ascii
 *
 *Check if is a alphabet
 *
 * Return: if it is lowercase return 1 else 0
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
