#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length of string
 * @s- string to evaluate
 *
 * Return- the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies string pointed to by src
 * including the terminating null byte (\0)
 * to buffer pointed to by dest
 * @dest- pointer to buffer in which we copy the string
 * @src- string to be copied
 *
 * Return- pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
