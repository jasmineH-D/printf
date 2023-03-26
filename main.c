#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int len;
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", "%z");
	printf("Character:[%c]\n", '%');
	len = _printf("String:[%s]\n", "CAZECAZIEJP\tAIJEIAJZ"); 
	printf("%d\n", len);
	len = printf("String:[%s]\n", "CAZECAZIEJP\tAIJEIAJZ");
	_printf("%d\n", len);
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Print this number [%d]\n", -2147483648);
	printf("hello [%c] oh\n", '\n');
	_printf("hello [%c] oh\n", '\n');
	return (0);
}
