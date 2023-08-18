#include "main.h"

/**
 * print_diagonal - prints a line n times long
 * @n: number of lines
 * description: prints a line n times long using _putchar
 */

void print_diagonal(int n)
{
int i, j;

if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}

