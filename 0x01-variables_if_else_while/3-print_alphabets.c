#include <stdio.h>

#include <stdlib.h>

/**
 * main - alphabets in capital and small buana
 *
 * Return:0 kama kawaida
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
