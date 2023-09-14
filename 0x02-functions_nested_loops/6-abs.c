#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @c: Number computed
 * Return: Absolute value of number or Zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
