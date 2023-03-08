#include "main.h"

/**
 * _strlen_recursion - print string in rev
 *
 * @s:
 *
 * Return: result len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
