#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there */

/* betty style doc for function main goes there */

/* main - tells if the number is positive or negative */

/* Return: goes for 0 success */

int main(void)     /* main log */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
