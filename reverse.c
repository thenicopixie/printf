#include "holberton.h"

/**
* reverse - the helper function to the binary part of itob
*
*/


int reverse(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[j])
		j++;
	for (i = 0; i < j; i++, j--)//swaps
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	for (i = 0; s[i]; i++)//print now it is in correct order
		_putchar(s[i] - '0');
	return (i);
}
