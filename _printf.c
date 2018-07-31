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
	int i = 0;
	int count = 0;
	char *s;
	int length = 0;
	unsigned int binary = 0;

	if (format == NULL)
		return (-1);
	va_start(argu, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(argu, int));
					i++;
					count++;
					break;
				case 's':
					s = va_arg(argu,  char *);
					if (s == NULL)
					{
						s = "(null)"
						write(1, &s, 6);
						count += 6;
						return (-1);
					}
					length = _strlen(s);
					if (!s[length])
						return (-1);
					_putstring(s);
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
				case 'b':
					binary = va_arg(argu, unsigned int);
					count += dec_to_binary(binary);
					i++;
				default:
					return (-1);
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
