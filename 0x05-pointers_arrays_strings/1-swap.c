#include "main.h"

/**
 * swap_int - swaps the values pointed to by two int pointers.
 * @a: the first int pointer
 * @b: the second int pointer
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

