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
        if (dig < 0 && dig / 10 == 0)
                _putchar(45);
        if (dig / 10)
                print_number(dig / 10);
        if (n < 0)
                _putchar(((dig % 10) * -1) + '0');
        else
                _putchar((dig % 10) + '0');
}
