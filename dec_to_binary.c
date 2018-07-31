#include "holberton.h"

int dec_to_binary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (_putchar(n % 2 + 10 * dec_to_binary(n / 2)));
    }
}

