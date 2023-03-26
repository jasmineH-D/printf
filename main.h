#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void _putchar(char c);
int _printf(const char *format, ...);
int handle_format(char c, va_list arg);
int _strlen(char *s);
void _puts(char *str);
int _num_count(int num);
void print_number(int n);

#endif
