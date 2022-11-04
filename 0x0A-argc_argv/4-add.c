#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks
 * if string is a number
 * @s: string
 * Return: On success 1.
 * If not a number, 0 is returned.
 */

int _isnumber(char *s)
{
	int a, check, z;

	a = 0, z = 0, check = 1;
	if (*s == '-')
		a++;
	for (; *(s + a) != 0; a++)
	{
		z = isdigit(*(s + a));
		if (z == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
