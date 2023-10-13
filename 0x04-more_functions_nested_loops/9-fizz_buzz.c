#include "stdio.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 * numbers multiples of 3 Fizz
 * numbers multiples of 5 Buzz
 * numbers multiples of 3 and 5 FizzBuzz
 * space between each char and num
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
