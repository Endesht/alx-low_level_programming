#include "main.h"

/**
 * Print_sign - prints sign of numbers
 * @n: The number checked
 * Return: 1 for positive numbers, -1 for negative or zero for else
 */

int print_sign(int n)
{
	if (n > 0)
	{
_putchar(43);
return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
