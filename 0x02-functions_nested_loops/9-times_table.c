#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
int k = j * i;
if (j == 0)
{
_putchar(k + '0');
}
if (k < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
}

