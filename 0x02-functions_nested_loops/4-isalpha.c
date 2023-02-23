#include "main.h"

/**
 * _isalpha - Entry point
 *
 *Check if is a alphabet
 *
 * Return: if it is lowercase return 1 else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
