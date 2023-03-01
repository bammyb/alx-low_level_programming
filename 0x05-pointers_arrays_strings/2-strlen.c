#include "main.h"

/**
 * _strlen - calculate the length of a string
 *
 * @s: Takes a char string
 *
 * Return: the value of i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
