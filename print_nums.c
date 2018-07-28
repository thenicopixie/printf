#include "holberton.h"
/**
* print_number - print integer
* @n: integer to print
*/
void print_number(int n)
{
	int dig;

	dig = n;
/* if dig is a negative number and have more than 1 digit */
	if (dig < 0 && dig / 10 == 0)
/* print '-' */
		_putchar(45);
/* if dig is divisible by 10 (more that one digit number) */
	if (dig / 10)
	{
/* divide dig by 10, plug back into fuction */
		print_number(dig / 10);
	}
/* if dig n is a negative number, print sigle digit from dig, multiply by -1 */
	if (n < 0)
		_putchar(((dig % 10) * -1) + '0');
/* else print single digit */
	else
		_putchar((dig % 10) + '0');
}
