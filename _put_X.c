#include "main.h"

/**
 * _put_X - Converts and prints an unsigned long int to uppercase hexadecimal.
 * @nb: The unsigned long integer to be printed.
 * Return: The number of characters printed.
 */

int	_put_X(unsigned int nb, int check)
{
	char *base = "0123456789ABCDEF";
	char *rev_num;
	int i, j, k = 0;

	i = 0;
	if (nb == 0)
		return (_putchar('0'));
	rev_num = malloc(sizeof(char) * get_len(nb));
	while (nb > 0)
	{
		j = nb % 16;
		nb = nb / 16;
		rev_num[i++] = base[j];
	}
	j = 0;
	if (check == 1)
	{
		while (--i >= 0)
			j += _putchar(rev_num[i]);
	}
	else
	{
		if (i == 1)
			j += _putchar('0');
		while (--i >= 0 && k < 2)
		{
			j += _putchar(rev_num[i]);
		}
	}
	free(rev_num);
	return (j);
}
