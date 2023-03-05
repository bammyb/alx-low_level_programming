#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @a: takes an integer input
 *
 * Return: last digit
 */

int print_last_digit(int a)
{
	int ld;

	ld = a % 10;
	if (a < 0)
	{
		ld = -(ld);
	}
	_putchar(ld + '0');
	return (ld);
}
