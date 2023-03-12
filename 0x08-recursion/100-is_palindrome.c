#include "main.h"

/**
 * str_length - checks length of char
 *
 * @s: takes a char str
 *
 * Return: length of str
 */


int str_length(char *s)
{
	if (!(*s))
	{
		return (0);
	}
	return (1 + str_length(s + 1));
}

/**
 * _checkpal - checks if its a pallendrum
 *
 * @i: start from 0
 * @j: set by strlel
 * @s: string
 *
 * Return: 1 or 0 or the code
 */

int _checkpal(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	if (s[i] == s[j])
		return (_checkpal(i + 1, j - 1, s));
	return (0);
}

/**
 * is_palindrome - check pal
 * @s: takes a char pointer input
 * Return: 1 or checkpal
 */

int is_palindrome(char *s)
{
	if (!(*s))
	{
		return (1);
	}
	else if (*(s + 1) == '\0')
		return (1);
	if (s[0] == s[1] && s[2] == '\0')
		return (1);
	return (_checkpal(0, str_length(s) - 1, s));
}
