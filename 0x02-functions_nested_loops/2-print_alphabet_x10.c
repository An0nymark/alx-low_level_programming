#include "main.h"

/**
 * alphabetx10 -This prints out the alphabets in 10 lines(loop)
 *
 * Return:0
 */

void alphabetx10(void)
{
	char a = 'a';

	while ('0' <= '10')
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
	}

}
