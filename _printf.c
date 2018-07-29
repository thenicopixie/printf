#include "holberton.h"
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
	int i = 0, count = 0;
	char *s;

	va_start(santa, format);
	while (format && format[i])
	{
		if(*(format + i) == '%' && (format[i + 1]))
		{
			switch (format[i + 1])
			{
				i++;	
				case 'c':
					_putchar(va_arg(santa, int));
					i++;
					count++;
					break;
				case 'i':
					print_number(va_arg(santa, int));
					i++;
					count++;
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
					write(1, s, va_arg(santa, double));
					count += _strlen(s);
					break;
				case 'd':
					print_number(va_arg(santa, int));
					i++;
					count++;
					break;
				case '%':
					write(1, &format[i], _strlen(s));
					i++;
					count++;
					break;
				default:
					_putchar('%');
					count++;
					i++;
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
	printf("%i\n", count);
	return (0);
}
int main(void)
{
	printf("char: %c\n", "c");
	_printf("char: %c\n", "c");
        printf("string: %s\n", "string");
        _printf("string: %s\n", "string");
        printf("int: %i\n", 34, -34);
        _printf("int: %i\n", 34, -34);
        printf("decimal: %d %d\n", 22, 2+2);
        _printf("decimal: %d %d\n", 22, 2+2);
	return (0);
}
