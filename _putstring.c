#include "holberton.h"

/**
* _putstring - prints a string
* @s: the pointer passed to this
*
* Description: putchar didnt work so i made this
* Return: nothing it is void
*/

void _putstring(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
