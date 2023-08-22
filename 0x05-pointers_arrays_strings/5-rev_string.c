#include "main.h"

/**
 * rev_string - reverse string
 * @s: the string
 */
void rev_string(char *s)
{
int len = 0, j;
char c;

/* Calculate the length of the string */
while (s[len] != '\0')
len++;

len--; /* Adjust the length to index the last character */
for (j = 0; j < len / 2; j++)
{
c = s[j];
s[j] = s[len];
s[len] = c;
len--;
}
}

