#include "main.h"
/**
 * string_touppr - change all lower case
 * @n: pointer
 *
 * return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')\
	{
		if n[i] >= 'a' && <= 'z')
			n[i] = n[i] - 32;
		i++
	}
	return (n);
}
