#include "holberton.h"
#include <stdio.h>

/**
* _printf - our own printf function
* @format: A character string, composed of zero of more directives
*
* Description: Writes a formatted string to the standard output
* Return: an integer. The number of characters printed excluding the null byte
*/

int _printf(const char *format, ...)
{
	va_list argu;
	int i = 0, count = 0;
	char *s;
	int length = 0;

	if (!format)
		return (-1);
	va_start(argu, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					putchar(va_arg(argu, int));
					i++;
					count++;
					break;
				case 's':
					s = va_arg(argu,  char *);
					if (s == NULL)
					{
						return (-1);
					}
					length = _strlen(s);
					if (!s[length])
						return (-1);
					write(1, s, _strlen(s)) + 1;
					i++;
					count += _strlen(s);
					break;
				case 'i':
				case 'd':
					count +=
					print_number(va_arg(argu, int));
					i++;
					break;
				case '%':
					_putchar('%');
					i++;
					count++;
					break;
				default:
					return (-1);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(argu);
	return (count);
}
