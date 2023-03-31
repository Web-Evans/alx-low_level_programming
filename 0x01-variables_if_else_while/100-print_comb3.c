#include <stdio.h>
/**
 * main - print single digit
 *
 * Return: 0 always
 */

int main(void)
{
        int i;
	int j;

        for (i = 0 ; i < 10 ; i++)
	{ 
		for (j = 0 ; j < 10 ; j++)
		{
			putchar(i);
			putchar(j);
		}
	}
        putchar('\n');
        return (0);
}

