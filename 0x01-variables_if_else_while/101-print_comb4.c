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
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			for (j = '2'; j <= '9'; j++)
			{
				if (k == i || k == j || i == j || j < k || i < k || j < i)
					continue;
		putchar(k);
		putchar(i);
		putchar(j);

		if (k == '7' && i == '8' && j == '9')
			continue;
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

