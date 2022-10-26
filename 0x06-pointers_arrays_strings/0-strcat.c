#include "main.h"

/**
 * _strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int e;

	d = 0;
	e = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[e] != '\0')
	{
		dest[d] = src[e];
		e++;
		d++;
	}

	dest[d] = '\0';
	return (dest);
}
