#include "holberton.h"

int dec_to_binary(unsigned int n)
{
	int i = 0;
	int j = 0;
	int array[1000];

	while (n > 0)
	{
		array[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = 0; j >= i - 1; j++)
		_putchar(array[j]);
	return (i);
}
