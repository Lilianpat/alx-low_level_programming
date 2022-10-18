#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet
 * Return: always 0;
 */

void print_alphabet(void)
{
	char alx;

	for (alx = 'a'; alx <= 'z'; alx++)
	{
		_putchar(alx);
	}
	_putchar('\n');
}
