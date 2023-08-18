#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: Always 0 (S)
 */

void more_numbers(void)
{
	int i, n, j;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			j = n;
			if (n > 9)
			{
				_putchar(1 + 48);
				j = n % 10;
			}
			_putchar(j + 48);
		}
		 _putchar('\n');
	}
}
