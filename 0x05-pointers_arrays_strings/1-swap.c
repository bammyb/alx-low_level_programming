#include "main.h"

/**
 * swap_int - changes value in pointers
 *
 * @a:
 *
 * @b:
 *
 */

void swap_int(int *a, int *b)
{
	int tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
