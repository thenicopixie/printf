#include "holberton.h"
/**
 * rot13 - encode srting into rot13
 * @point: string to encode
 * Return: (point)
 */
int rot13(char *point)
{
	int i = 0, j, count = 0;;

	char lett[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N',
'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z', 'a', 'b',
'c', 'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
'J', 'K', 'L', 'M', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm'};

	while (point[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (point[i] == lett[j])
			{
				point[i] = rot[j];
				_putchar(point[i]);
				count++;
				break;
			}
		}
		i++;
	}
	return (count);
}
