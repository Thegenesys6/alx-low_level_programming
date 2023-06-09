#include "main.h"

/**
 * *_memset - this fills memory with constant byte
 * @s: this is memory area to be filled
 * @b: this is char to copy
 * @n: the number of times to copy b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
