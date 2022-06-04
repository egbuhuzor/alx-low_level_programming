#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - checks the random number.
 *
 * Description: the main funtion checks the random number * and output if sign or unsign.
 * Return: null
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else 
		printf("%d is negative\n", n);

	return (0);
}
