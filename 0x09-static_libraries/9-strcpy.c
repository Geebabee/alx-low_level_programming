#include "main.h"
/**
 * _strcpy - copy the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed bybthe dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
