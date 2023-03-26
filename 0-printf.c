#include "main.h"

/**
 * handle_format - handles given format specifiers and prints the args
 * @c: the format specifier
 * @arg: the arguments
 * Return: returns the number of characters printed
 */

int handle_format(char c, va_list arg)
{
	if (c == 'd' || c == 'i')
	{
		int num = va_arg(arg, int);

		print_number(num);
		return (_num_count(num));
	}
	else if (c == 'c')
	{
		char e = va_arg(arg, int);

		_putchar(e);
		return (1);
	}
	else if (c == 's')
	{
		char *s = va_arg(arg, char *);

		_puts(s);
		return (_strlen(s));
	}

	else if (c == '%')
	{
		_putchar('%');
	}
	else
	{
		_putchar(c);
	}
	return (1);
}

/**
 * _printf - prints string integer and char using format specifiers
 * @format: the first argument containing the string and format specifiers
 * Return: the length of the printed string.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printed_chars = 0;
	int re;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	while (format[i] && format)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			printed_chars += 1;
		}
		else
		{
			re = handle_format(format[i + 1], arg);
			if (re == -1)
				return (-1);
			printed_chars += re;
			i += 2;
		}
	}

	va_end(arg);
	return (printed_chars);
}
