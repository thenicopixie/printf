#include "holberton.h"

/**
* _strcpy - copies all the chars including null term
* @dest: pointer to wehere you want the string copied to
* @src: the source of the string you want to be copied
*
* Description: Copies the string over so we can do stuff
* Return: Returns the copied over string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (dest[i] && (src[i]) != '\0')
		i++;
	return (dest);
}

