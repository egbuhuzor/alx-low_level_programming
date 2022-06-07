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
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i == j || j < i)
				continue;
		putchar(i);
		putchar(j);

		if (i == '8' && j == '9')
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	
	putchar('\n');
	return (0);
}

