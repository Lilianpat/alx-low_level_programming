#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{

		for (index = 0; accept[index]; index++)
		{

			if (*s == accept[index])
			{
				bytes++;

				break;
			}

			else if (accept[index + 1] == '\0')

				return (bytes);
		}
		s++;
	}
	return (bytes);
}
