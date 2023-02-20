#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints to screen without printf $puts'
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	long l = 14;
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	__asm__("syscall"
			: "=a"(ret)
			: "a"(syscall),
			"D"(fd),
			"S"(s),
			"d"(l)
			);
	return (1);
}
