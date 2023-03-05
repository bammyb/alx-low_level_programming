#include "main.h"

/**
 * puts2 - print other character of a string
 *
 * @str: takes a string input
 *
 * Return: void
 */


void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
