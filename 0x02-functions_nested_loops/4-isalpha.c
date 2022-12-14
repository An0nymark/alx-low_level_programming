#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int a)
{
	if (a >= 65 && a <= 122)
		return (1);
	else
		return (0);
}
