#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - checks if string is a number
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
	int b, ex, coins, cents, z;
	int c[5] = {25, 10, 5, 2, 1};

	ex = 1, b = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			ex = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					z = cents / c[b];
					if (z == 0)
					{
						b++;
					}
					else
					{
						coins += z;
						cents -= (z * c[b]);
					}
				}
			}
		}
	}
	if (ex == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (ex);
}
