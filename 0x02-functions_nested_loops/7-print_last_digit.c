#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @i: paramter
 *
 * Return: k always
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}

