#include "main.h"

/**
 * main -- checks if a character is lowercase if YES it returns 1
 * @c: Is the int value to be compared with the ASCII value
 *
 * Return:0
 */

int main(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
