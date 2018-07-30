#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
* print_number - print integer
* @n: integer to print
*/
int print_number(int n)
{
	int dig = n;
	int count = 0;
	int places = 1000000000;
	int x = 0;

	if (n < 0)
	{
		_putchar('-');
		dig = -n;
		count++;
	}
	while (places > dig)
		places /= 10;
	while (places > 0)
	{
		x = dig / places;
		_putchar((x % 10) + '0');
		places /= 10;
		count++;
	}
	return (count);
}
