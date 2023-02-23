#include "main.h"

/**
 * _islower - Entry point
 *
 *Check if a alphabet is lowercasr
 *
 * Return: if it is lowercase return 1 else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
