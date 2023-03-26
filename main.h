#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void _putchar(char c, int *sum);
int _printf(const char *format, ...);
void handle_spec(char c, int *sum, va_list args);
int _strlen(char *s);
void print_str(char *str, int *sum);
int _num_count(int num);
void print_int(int num, int *sum);

#endif
