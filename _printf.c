#include "holberton.h"

/**
* _putchar - prints one character
* @c: a character passed by some function
*
* Description: loop through and use this to print a whole thingy
* Return: a character to the standard output.
*/

char _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _strcpy - copies all the chars including null term
* @dest: pointer to wehere you want the string copied to
* @src: the source of the string you want to be copied
*
* Description: Copies the string over so we can do stuff
* Return: Returns the copied over string
*/

char * _strcpy(char *dest, char *src)
{
	int i = 0;

	while (dest[i] = src[i] != '\0')
		i++;
	return (dest);
}	

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

/**
* _printf - our own printf function
* @format: NICLE GOT THIS PART
*
* Description: NICOLEEEE
* Return: an int. the character length.
*/

int _printf(const char *format, ...)
{
	va_list santa;
	int i = 0;
	char *s;
	int flag = 0;

	va_start(santa, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)  va_arg(santa, int));
				flag = 1;
				break;
			case 'i':
				printf("%i", va_arg(santa, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(santa, double));
				flag = 1;
				break;
			case 's':
				s = va_arg(santa, char *);
				if (s == NULL)
				{
					printf("(nil)");
					flag = 1;
					break;
				}
				printf("%s", s);
				flag = 1;
				break;
		}
		if (format[i + 1] != 0 && flag == 1)
			printf(", ");
		i++;
		flag = 0;
	}
	va_end(santa);
	printf("\n");
}
}