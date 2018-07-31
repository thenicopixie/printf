#include "holberton.h"
/**
 * rot13 - encode srting into rot13
 * @point: string to encode
 * Return: (point)
 */
int rot13(char *point)
{
	int i = 0, j, count = 0, flag = 0;

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
	if (!point)
	{
		_putstring("(null)");
		count += 6;
		return (count);
	}
	while (point[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (point[i] == lett[j])
			{
				_putchar(rot[j]);
				count++;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			_putchar(point[i]);
		i++;
	}
	return (count);
}
