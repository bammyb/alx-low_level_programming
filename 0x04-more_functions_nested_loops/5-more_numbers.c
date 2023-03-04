#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int d, i;

	for (d = 0; d < 10; d++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	_putchar ('\n');
	}
}
