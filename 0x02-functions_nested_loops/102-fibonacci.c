#include <stdio.h>

/**
 * main - main function - program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	long int num1 = 1;
	long int num2 = num1 + 1;
	long int num3 = num1 + num2;

	printf("%ld, %ld, ", num1, num2);
	while (counter < 50)
	{
		printf("%ld", num3);
		counter++;
		num1 = num2;
		num2 = num3;
		num3 = num1 + num2;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
