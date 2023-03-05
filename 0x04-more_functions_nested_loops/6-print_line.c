#include "main.h"

/**
 * print_line - functions draws a line
 *
 * @n: functions an int paramete
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
