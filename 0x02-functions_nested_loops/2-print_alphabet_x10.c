#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: always 0;
 */
void print_alphabet_x10(void)
{
	char alx;
	char se;

	for (se = 0; se <= 9; se++)
	{
		for (alx = 'a'; alx <= 'z'; alx++)
		{
			_putchar(alx);
		}
		_putchar('\n');
	}
}
