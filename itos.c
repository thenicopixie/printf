#include "holberton.h"



void reverse(char *s)
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
}


char *itos(int n)
{
	int count = 0;
	char *s;
	int temp = n;
	int power = 10;
	int i = 0;

	while (temp)
	{
		temp /= 10;
		count++;
	}
	s = malloc(count);
	for ( ; count > 0; count--)
	{
		s[i] = n % power;
		power *= 10;

	}
	reverse(s);
	return (s);
}
