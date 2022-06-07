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
	int p;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (p = 'a'; p < 'g'; p++)
		putchar(p);
	putchar('\n');
	return (0);
}

