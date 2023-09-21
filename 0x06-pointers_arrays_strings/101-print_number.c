#include "main.h"

/**
 * print_number - chars
 * @n: integer
 * Return: 0
 */

void print_numbers(int n)
{
	unsigned int n1;
	
	n1 = ;

	if (n < 0)
	{
		_putchar('_');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar(n1 % 10) + '0');
}
