#include "main.h"

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 15 == 0)
			printf("FizzBuzz");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
	}
	printf("\n");
	return (0);
}
