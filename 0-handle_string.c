#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _putchar - prints a character to stdout
 * @c: the char to print
 * @sum: the number of printed char
 */

void _putchar(char c, int *sum)
{
	write(1, &c, 1);
	(*sum)++;
}

/**
 * print_str - prints a given string
 * @str: the string
 * @sum: the sum of printed characters
 */

void print_str(char *str, int *sum)
{
	int i = 0;

	while (str && str[i])
	{
		write(1, &str[i], 1);
		(*sum)++;
		i++;
	}
}
