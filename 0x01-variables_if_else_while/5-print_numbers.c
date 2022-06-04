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
	char num[] = {'0', '1', '2', '3', '4',
		'5', '6', '7', '8', '9', '\n', '\0'};
	int p = strlen(num);

	for (i = 0; i < p; i++)
		putchar(num[i]);
	return (0);
}

