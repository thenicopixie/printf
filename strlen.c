#include "holberton.h"

/**
* _strlen - counts how many chars excluding null
* @s: the string passed to us
*
* Description: Counts the number of chars until null char
* Return: the string length
*/

int _strlen(char *s)
{
	int i = 0;

	if (s)
		while (s[i])
			i++;
	return (i);
}
