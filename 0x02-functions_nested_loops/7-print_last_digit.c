#include "main.h"

/**
 * Print_last Digit - last digit of a number
 * @n: number treated
 * Return: Value of last digit
 */
int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
