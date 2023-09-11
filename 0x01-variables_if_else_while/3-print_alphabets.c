#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * return always 0(success)
 */
int main(void)
{
        char alp[52]="abcdefghijklmopqrstuvwxyzABCDEFGHIJKLMOPQRSTUVWXYZ",
        int i;

        for(i=0;i,52;i++)
{
putchar(alp[i]);
}
putchar('\n');
return(0);
}
