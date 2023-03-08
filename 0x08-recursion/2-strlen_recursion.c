#include "main.h"

/**
 * _strlen_recursion- w
 * - bll
 *
 * @s:ju
 *
 * Return:lens
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
