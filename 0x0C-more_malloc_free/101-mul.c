#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int k, j;

	if (argc != 3)
	{printf("Error\n");
	exit(98);
	}
	for (k = 1; k < argc; k++)
	{
		for (j = 0; argv[k][j] != '\0'; j++)
		{
			if (argv[k][j] > 57 || argv[k][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
