#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("OURS Let's try to printf a simple sentence.\n");
    len2 = printf("THEIRS Let's try to printf a simple sentence.\n");
  _printf("OURS function Character:[%c]\n", 'H');
    printf("THEIRS standard Character:[%c]\n", 'H');
    _printf("OURS String:[%s]\n", "I am a string !");
    printf("THEIRS String:[%s]\n", "I am a string !");
    _printf("OURS String:[%%]\n");
    printf("THERIS String:[%%]\n");
	_printf("OURS length:[%d] and [%d]\n", len, len2);
	printf("THEIRS length:[%d] and [%d]\n", len, len2);
	return (0);
}
