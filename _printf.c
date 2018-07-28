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
* @format: A character string, composed of zero of more directives
*
* Description: Writes a formatted string to the standard output
* Return: an integer. The number of characters printed excluding the null byte
*/

int _printf(const char *format, ...)
{
	va_list santa;
	int i = 0;
	char *s;

	va_start(santa, format);
	while (format[i])
	{
		if(*(format + i) == '%' && (format[i + 1]))
		{
			switch (format[i + 1])
			{
				i++;	
				case 'c':
					_putchar(va_arg(santa, int));
					i++;
					break;
				case 'i':
					_putchar(va_arg(santa, int));
					break;
				case 'f':
					printf("%f", (float) va_arg(santa, double));
					break;
				case 's':
					s = va_arg(santa, char *);
					if (s == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", s);
					break;
				case 'd':
					print_number(va_arg(santa, int));
					i++;
					break;
				case '%':
					_putchar(va_arg(santa, int));
					break;
				case 'b':
					break;
				default:
					_putchar('%');
					break;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(santa);
	_putchar('\n');
}
