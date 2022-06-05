#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints the alphabet in lowercase
 * reverse
 *
 * Description: this function prints out the
 * alphabet in reverse lowercase order
 * Return: null
 */
int main(void)
{
	int i;
	char aph[] = {'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q',
		'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', '\0'};
	int p = strlen(aph);

	for (i = p - 1; i > -1; i--)
		putchar(tolower(aph[i]));
	putchar('\n');
	return (0);
}

