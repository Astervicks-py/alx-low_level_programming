#include "main.h"

/**
 * _strcpy - copies the sarting
 * @dest: dest
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) != '\0')
			len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
