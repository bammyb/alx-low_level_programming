#include "main.h"

/**
 * _strlen_recursion - print string in rev
 *
 * @s:
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
