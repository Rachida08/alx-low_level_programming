#include "main.h"
/**
 * _isupper - check if c is upper
 *
 *  input for alphabet
 *
 *  return : 1 if its uppercase and 0 otherwise
*/

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
