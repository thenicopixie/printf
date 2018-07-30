#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
* print_number - print integer
* @n: integer to print
*/
int print_number(int n)
{
	int i = 1, digs = n, ct = 0;

	while (digs / 10)
	{
		digs /= 10;
		i *= 10;
	}
	if (n < 0)
	{
		_putchar('-');
		ct++;
	}
	while (i > 0)
	{
		digs = n / i;
		i /= 10;
		if (digs < 0)
		{
			_putchar(digs % 10 * -1 + '0');
			ct++;
		}
		else
		{
			_putchar(digs % 10 + '0');
			ct++;
		}
	}
	return (ct);
}
