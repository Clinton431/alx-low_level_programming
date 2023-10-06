#include <stdlib.h>
#include <time.h>
/* more headers */
#include <stdio.h>
/* betty style doc for function goes here */
/**
 * main - function
 * Return: Always 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
