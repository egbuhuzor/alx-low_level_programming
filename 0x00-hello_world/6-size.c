#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this function prints variable sizes
 * Return: Always zero Success
 */
int main(void)
{
	int b;
	char ch;
	long lg;
	long long llg;
	float fl;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(lg));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llg));
	printf("Size of a float: %d byte(s)\n", sizeof(fl));
	return (0);
}
