#include "main.h"

/**
 * alphabetx10 -This prints out the alphabets in 10 lines(loop)
 *
 * Return:0
 */

void alphabetx10(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}

		_putchar('\n');
		i++;
	}

}
