#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return : void 
 */

void print_alphabet_x10(void)
{
char al;
int i;
i = 0;
while (i < 10)  // Change from i<0 to i<10
{
for (al = 'a'; al <= 'z'; al++)
{
_putchar(al);
}
_putchar('\n');  
i++;
}
}

