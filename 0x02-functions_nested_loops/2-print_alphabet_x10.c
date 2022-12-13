#include "main.h"

/**
 * alphabet -This prints out the alphabets in 10 lines(loop)
 *
 * Return:0
 */

int alphabet(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		i++;

	}
	return (0);
}
