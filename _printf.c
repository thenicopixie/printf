#include "holberton.h"
#include <stdio.h>

/**
* _printf - our own printf function
* @format: A character string, composed of zero of more directives
*
* Description: Writes a formatted string to the standard output
*n Return: an integer. The number of characters printed excluding the null byte
*/

int _printf(const char *format, ...)
{
	va_list argu;
	int i = 0, count = 0;
	char *s;
	char *nil;

	nil = "(null)";
	va_start(argu, format);
	for (i = 0; format && format[i]; i++)
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
						write(1, nil, _strlen(nil));
						i++;
						break;
					}
					write(1, s, _strlen(s));
					i++;
					count += _strlen(s);
					break;
				case 'i':
				case 'd':
					count += print_number(va_arg(argu, int));
					i++;
					break;
				case '%':
					_putchar('%');
					i++;
					count++;
					break;
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
int main(void)
{
	printf("%");
	printf("\n");
	_printf("%");
	_printf("\n");
	return (0);
}
