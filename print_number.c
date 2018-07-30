#include "holberton.h"
/**
* print_number - print integer
* @n: integer to print
*/
int print_number(int n)
{
	int dig;
	int count = 0;

	if (n < 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			dig = n % 10;
			dig = dig * -1;
			_putchar(dig + '0');
			count++;
		}
		else
		{
			dig = n % 10;
			dig = dig * -1;
			_putchar(45);
			_putchar(dig + '0');
			count++;
		}
	}
	else if (n >= 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			dig = n % 10;
			_putchar(dig + '0');
			count++;
		}
		else
		{
			_putchar(n % 10 + '0');
			count++;
		}
	}
	return (count);
}
