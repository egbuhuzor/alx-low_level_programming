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

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

