#include <stdio.h>

/**
 * main - we are using sizeof here
 *
 * Return:0
 */

int main(void)
{
	int i;
	double d;
	char c;

	printf("Size of a char: \n,"sizeof(char));

	printf("Size of an int: \n"sizeof(int));

	printf("Size of a long int: \n"sizeof(long int));

	printf("Size of a long long int: \n"sizeof(long long int));

	printf("Size of a float: \n"sizeof(float));

	return (0);
}

