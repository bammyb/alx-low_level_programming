#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * print alphabet * 10
 *
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char a = 'a';

		while (a < 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
