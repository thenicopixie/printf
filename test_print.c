#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_number - print integer
* @n: integer to print
*/
void print_number(int n)
{
        int dig;

        dig = n;
/* if dig is a negative number and have more than 1 digit */
        if (dig < 0 && dig / 10 == 0)
/* print '-' */
                _putchar(45);
/* if dig is divisible by 10 (more that one digit number) */
        if (dig / 10)
        {
/* divide dig by 10, plug back into fuction */
                print_number(dig / 10);
        }
/* if dig n is a negative number, print sigle digit from dig, multiply by -1 */
        if (n < 0)
                _putchar(((dig % 10) * -1) + '0');
/* else print single digit */
        else
                _putchar((dig % 10) + '0');
}
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

	while (dest[i] && (src[i]) != '\0')
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
	va_list argu;
	int i = 0;
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
					break;
				case 'i':
					print_number(va_arg(argu, int));
					i++;
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
					break;
				case 'd':
					print_number(va_arg(argu, int));
					i++;
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
	return (0);
}

int main(void)
{
	char a = 'a';

	printf("this is a char: %c\n", a);
	_printf("this is a char: %c\n", a);
	printf("this is a string: %s \n", "hello");
        _printf("this is a string: %s \n", "hello");
        printf("this is a int: %i\n", 34);
        _printf("this is a int: %i\n", 34);
	 printf("this is a digit: %d, and so is this: %d\n", 455 + 1, -455);
        _printf("this is a digit: %d, and so is this: %d\n", 455 + 1, -455);
	printf("whoops %% \n");
	_printf("whoops %% \n");
	printf("test one mod: %z \n");
	_printf("test one mod: %z \n");
	
	return (0);
}
