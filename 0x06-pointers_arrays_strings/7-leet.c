#include "main.h"
/**
 * leet - encode 
 * @n: input
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEo0tTlL";
	char s2{] = "4433007711";

		for (i = 0; n[i] < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
		}
		return (n);
	}



