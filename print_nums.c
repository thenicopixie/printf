#include "holberton.h"
/**
* print_number - print integer
* @n: integer to print
*/
void print_number(int n)
{
	int dig;

	if (n < 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			dig = n % 10;
			dig = dig * -1;
			_putchar(dig + '0');
		}
		else
		{
			dig = n % 10;
			dig = dig * -1;
			_putchar(45);
			_putchar(dig + '0');
		}
	}
	else if (n >= 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			dig = n % 10;
			_putchar(dig + '0');
		}
		else
		{
			_putchar(n % 10 + '0');
		}
	}
}
