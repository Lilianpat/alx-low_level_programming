#include <stdio.h>

/**
 * main - main function - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long num1, num2, num3;
	unsigned long x1, x2, x3, carry;

	count = 0;
	num1 = 0;
	num2 = 1;
	for (count = 1; count <= 91; count++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%lu, ", num3);
	}
	x1 = num1 % 1000;
	num1 = num1 / 1000;
	x2 = num2 % 1000;
	num2 = num2 / 1000;
	while (count <= 98)
	{
		carry = (x1 + x2) / 1000;
		x3 = (x1 + x2) - carry * 1000;
		num3 = (num1 + num2) + carry;
		x1 = x2;
		x2 = x3;
		num1 = num2;
		num2 = num3;
		if (x3 >= 100)
			printf("%lu%lu", num3, x3);
		else
			printf("%lu0%lu", num3, x3);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
