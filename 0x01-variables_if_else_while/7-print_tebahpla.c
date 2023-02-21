#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
