#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
				}
	}
	_putchar('\n');
}
