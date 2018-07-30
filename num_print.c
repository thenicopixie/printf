#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
* print_number - print integer
* @n: integer to print
*
* Description: this is the advance problem from a nearlier project
* Return: an int, the count.
*/
int print_number(int n)
{
	int dig = n;
	int count = 0;
	int places = 1;

	while (dig / 10)
	{
		dig /= 10;
		places *= 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	while (places > 0)
	{
		dig = n / places;
		places /= 10;
		if (n < 0)
			_putchar(dig % 10 * (-1) + '0');
		else
			_putchar(dig % 10 + '0');
		count++;
	}
	return (count);
}
