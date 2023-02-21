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
	int base = 10;
	int n = 0;
	int a = 48;

	for (; n < base; n++)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
