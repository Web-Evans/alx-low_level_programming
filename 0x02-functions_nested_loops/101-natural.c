#include <stdio.h>
/**
 * main - writing a program that prints natural numbe
 * Return: 0 always
 */
int main(void)

{
	int b;
	int q;

	q = 0;

	for (b = 0 ; b < 10 ; b++)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			q = q + b;
		}
	}
	printf("%d\n", q);
	return (0);
}
