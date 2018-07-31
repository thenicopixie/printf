#include "holberton.h"

/**
* dec_to_binary - does waht the name implies. a base 10 to a base 2
* @n: the number we are given and we will convert it to binary
*
* Description: uses math to calculate and an array to iterate
* Return: the number ans size of the char it printed
*/

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
	for (j = 0; j <= i - 1; j++)
		_putchar(array[j]);
	return (i);
}
