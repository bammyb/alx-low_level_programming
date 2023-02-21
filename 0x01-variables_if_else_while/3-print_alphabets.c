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
	char ll = 'a';
	char ul = 'A';

	while (ll <= 'z')
	{
		putchar(ll);
		ll++;
	}
	while (ul <= 'Z')
	{
		putchar(ul);
		ul++;
	}
	putchar('\n');

	return (0);
}
