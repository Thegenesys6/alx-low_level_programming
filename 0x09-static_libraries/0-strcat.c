#include "main.h"

/**
 * _strcat - this concatenates 2 strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
