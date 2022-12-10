#include <stdio.h>
#include <stdlib.h>

/**
 * main - main main
 *
 * Return:0
 */

int main(void)
{
	int num = '0';
	char abc = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (abc <= 'f')
	{
		putchar(abc);
		abc++;
	}

	putchar('\n');
	return (0);
}
