#include "holberton.h"

/**
* dec_to_binary - converts a dec to binary
* @n: the number bassed to us
*
* Description : does stuff. uses recursion
* Return: recursion
*/


int dec_to_binary(int n)
{
	if (n == 0)
		return (0);
	else
		return (n % 2 + 10 * dec_to_binary(n / 2));
}

