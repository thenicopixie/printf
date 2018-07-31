#include "holberton.h"

int _abs(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
		
}

/**
* stuffn to the binary part of itob
*
*/
void _reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = _strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
* dec_to_binary - a number we are given does waht the name implies
* @n: the number we are given and we will convert it to binary
*
* Description: uses math to calculate and an array to iterate
*	uses itob from the K&R book
* Return: the number ans size of the char it printed
*/

int dec_to_binary(int n, char *s, int b)
{
	int i, sign, count;
	char symbols[1024];

	if (2 > b || b > _strlen(symbols) )
		return 0;
	sign = n;
	i = 0;
	do
	{
		s[i++] = symbols[_abs(n % b)];
	} while (n /= b);
	if (sign < 0)
	s[i++] = '-';
	s[i] = '\0';
	_reverse(s);
	count = _strlen(s);
	return count;
}
