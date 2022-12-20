#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer to be swapped
 * @b: The first integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int t = *a;
	*a = *b;
	*b = t;
}
