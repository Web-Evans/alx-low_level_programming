#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s11: input one to concat
 * @s2: input two to concat
 * Return: concat of s11 and s2
 */
char *str_concat(char *s11, char *s2)
{
	char *conct;
	int i, ci;

	if (s11 == NULL)
		s11 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s11[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s11[i] != '\0')
	{
		conct[i] = s11[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
