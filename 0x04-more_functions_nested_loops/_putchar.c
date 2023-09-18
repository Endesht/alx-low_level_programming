#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c stdout
 * @c: character to print
 *
 * return: on succes 1
 * on error, -1 is returned, and errnon is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
