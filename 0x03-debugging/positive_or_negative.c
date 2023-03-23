#include "main.h"
/**
 * positive_or_negative - a function the checks negetive abd positive numbers.
 *
 * @i: number to be checked.
 * Return: 0 always
 */
void positive_or_negative(int i)
{
	if (i < 10)
		printf("%d is negetive\n", i);
	else
		printf("%d is positive\n", i);
}
