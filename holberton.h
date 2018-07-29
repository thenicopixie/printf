#ifndef NICOBYN
#define NICOBYN

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _printf - print string to standard output
 * print_number - print digits from number
 * _putchar - printf character
 * _strlen - return string length
 */
char _putchar(char c);
int _strlen(char *s);
char * _strcpy(char *dest, char *src);
int _printf(const char *format, ...);
void print_number(int n);

#endif
