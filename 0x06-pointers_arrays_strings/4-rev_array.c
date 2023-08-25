#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of intgers
 * @n: the number of elemnts to swap
 *
 * return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, m;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		m = a[i];
		a[i] = a[j];
		a[j] = m;
	}
}
