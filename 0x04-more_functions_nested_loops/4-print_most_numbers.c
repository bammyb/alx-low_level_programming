#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
