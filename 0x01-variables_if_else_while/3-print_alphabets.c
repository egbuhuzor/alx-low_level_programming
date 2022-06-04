#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Description: this function prints out the
 * alphabet in lowercase
 * Return: null
 */
int main(void)
{
	int i;
	char aph[] = {'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', '\n', '\0'};
	int p = strlen(aph);

	for (i = 0; i < p - 1; i++)
		putchar(tolower(aph[i]));
	for (i = 0; i < p; i++)
		putchar(aph[i]);
	return (0);
}

