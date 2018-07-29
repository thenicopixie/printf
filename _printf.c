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

	va_start(argu, format);
	while (format && format[i])
	{
		if(*(format + i) == '%' && (format[i + 1]))
		{
			switch (format[i + 1])
			{
				i++;	
				case 'c':
					_putchar(va_arg(argu, int));
					i++;
					count++;
					break;
				case 'i':
					print_number(va_arg(argu, int));
					i++;
					count++;
					break;
				case 'f':
					printf("%f", (float) va_arg(argu, double));
					break;
				case 's':
					s = va_arg(argu,  char *);
					if (s == NULL)
					{
						printf("(nil)");
						break;
					}
					write(1, s, _strlen(s));
					i++;
					count += _strlen(s);
					break;
				case 'd':
					print_number(va_arg(argu, int));
					i++;
					count++;
					break;
				case '%':
					write(1, &format[i], 1);
					i++;
					break;
				case 'b':
					break;
				default:
					write(1, &format[i], 1);
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
	va_end(argu);
	_putchar('\n');
	printf("number of characters printed: %i\n", count);
	return (0);
}

int main(void)
{
	char a = 'a';

	printf("printf - this is a char: %c\n", a);
	_printf("our _printf - this is a char: %c\n", a);
	printf("printf - this is a string: %s \n", "hello");
        _printf("our _printf - this is a string: %s \n", "hello");
        printf("printf - this is a int: %i\n", 34);
        _printf("our _printf -this is a int: %i\n", 34);
	 printf("printf - this is a digit: %d, and so is this: %d\n", 455 + 1, -455);
        _printf("our _printf - this is a digit: %d, and so is this: %d\n", 455 + 1, -455);
	printf("printf - check for 2 mods %% \n");
	_printf("our _printf - check for 2 mods %% \n");
	printf("printf - test one mod: %z \n");
	_printf("our _printf - test one mod: %z \n");
	
	return (0);
}
