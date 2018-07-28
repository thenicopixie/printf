#include "holberton.h"

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
