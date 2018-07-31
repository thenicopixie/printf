#ifndef NICOBYN
#define NICOBYN

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

char _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _printf(const char *format, ...);
int print_number(int n);
int _strlen_recursion(char *s);
int dec_to_binary(unsigned int n);
int _putstring(char *s);

#endif
