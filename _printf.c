#include "holberton.h"

/**
* no_struct - a helpe function that is called when there is a %something
* @c: the character passed that was after %
* @count: the number of count thus far. it will be incremented
* @argu: the va_list that is passed to us so we can va_arg it
*
* Description: NO I WILL NOT USE STRUCTS LIKE EVERYONE ELSE
* Return: the count total
*/

int no_struct(char c, int count, va_list argu)
{
	int j;
	char *s;
	int binary;

	switch (c)
	{
		case 'c':
			j = va_arg(argu, int);
			_putchar(j);
			count++;
			break;
		case 's':
			s = va_arg(argu, char *);
			if (!s)
			{
				_putchar('(');	
				_putchar('n');	
				_putchar('u');	
				_putchar('l');	
				_putchar('l');
				_putchar(')');
				count += 6;
			}
			else
				count += _putstring(s);
			break;
		case 'i':
		case 'd':
			j = va_arg(argu, int);
			if (!j)
			{
				count++;
				_putchar('0');
			}
			else
				count += print_number(j);
			break;
		case '%':
			count++;
			_putchar('%');
			break;
		case 'b':
			binary = va_arg(argu, unsigned int);
			count += dec_to_binary(binary);
			break;
		default:
			count += 2;
			putchar('%');
			putchar(c);
	}
	return (count);
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
	int i = 0;
	int count = 0;
	va_list argu;

	va_start(argu, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			count = no_struct(format[i], count, argu);
		}
		else
			return (-1);
	}
	va_end(argu);
	return (count);
}


/*
	va_list argu;
	int i = 0, ch;
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
					ch = (va_arg(argu, int));
					i++;
					_putchar(ch);
					count++;
					break;
				case 's':
					s = va_arg(argu,  char *);
					if (s == NULL)
					{
						s = "(null)";
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
				case ' ':
					return (-1);
				case '\0':
					return (-1);
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

*/
