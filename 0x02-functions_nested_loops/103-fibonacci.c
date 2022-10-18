#include <stdio.h>

/**
 * main - main function - Prints the sum of even-valued Fibonacci sequence
 * values do not exceed 4,000,000
 * Return: nothing
 */

int main(void)
{
	int counter = 0;
	long int num1 = 1;
	long int num2 = num1;
	long int num3 = num1 + num2;

	while (num3 < 4000000)
	{
		if (num3 % 2 == 0)
		{
			counter += num3;
		}
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
	}
	printf("%d\n", counter);
	return (0);
}
