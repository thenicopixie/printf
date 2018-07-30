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
	char *nil;

	nil = "(null)";
	va_start(argu, format);
	while (format && format[i])
	{
		if (*(format + i) == '%' && (format[i + 1]))
		{
			switch (format[i + 1])
			{
				i++;
				case 'c':
					_putchar(va_arg(argu, int));
					i++;
					count++;
					break;
				case 's':
					s = va_arg(argu,  char *);
					if (s == NULL)
					{
						i++;
						write(1, nil, _strlen(nil));
						break;
					}
					write(1, s, _strlen(s));
					i++;
					count += _strlen(s);
					break;

				case 'i':
					print_number(va_arg(argu, int));
					i++;
					count++;
					break;
				case 'd':
					print_number(va_arg(argu, int));
					i++;
					count++;
					break;
				case '%':
					write(1, &format[i + 1], 1);
					i++;
					break;
				default:
					exit(-1);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(argu);
	return (count);
}
