#include "main.h"

/**
 * _num_count - counts the length of a number
 * @num: the number
 * Return: the length of the number
 */

int _num_count(int num)
{
	int count = 0;

	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
 * print_int- prints a given number
 * @num: the number to be printed
 * @sum: the sum of printed char(int numbers)
 */

void print_int(int num, int *sum)
{
	char c;
	unsigned int tmp;

	if (num < 0)
	{
		write(1, "-", 1);
		(*sum)++;
		tmp = num * -1;
	}
	else
	{
		tmp = num;
	}

	if (tmp < 10)
	{
		c = tmp + '0';
		write(1, &c, 1);
		(*sum)++;
	}
	else
	{
		print_int((tmp / 10), sum);
		print_int((tmp % 10), sum);
	}
}
