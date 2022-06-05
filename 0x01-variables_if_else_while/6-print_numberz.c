#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints the single digit numbers
 *
 * Description: this function prints single
 * digit numbers of base ten
 * Return: null
 */
int main(void)
{
	int i;
	int p = '0';

	for (i = 0; i < 10; i++)
	{
		putchar(p);
		p = p + 1;
	}
	putchar('\n');
	return (0);
}

