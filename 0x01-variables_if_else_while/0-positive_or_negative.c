#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if number is positive,zero or negative
 *
 * Return: Always (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ()
	{
		printf("%d is positive\n", n);
	}
	else if ()
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
