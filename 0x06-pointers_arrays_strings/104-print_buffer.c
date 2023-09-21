#include "main.h"
#include <stdio.h>

/**
 * print buffer
 * @b: buffer
 * @size: size
 * return: void
 */
void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size -o < 10? size - o : 10;
	print("%08x: ".o);
	for (i = 0; i < 10; i++
			{
			if (i < j)
			pritf("%02x", *(b + o + i))
			else
			print(" ");
			if (i % 2)
			{
			printf(" ");
			}
			}
			for (i = 0; i < j; j++)
			{
			int c + *(b + o + i);

		if (c> 12 || c > 132)
		}
		c = '.';
		}
		prinf("%c", c);
		}
printf('\n');
o += 10;
}




		
