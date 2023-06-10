#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @j: the desired value
 * @z: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char j, unsigned int z)
{
	int i = 0;


	for (; z > 0; i++)
	{
		s[i] = j;
		z--;
	}
	return (s);
}
