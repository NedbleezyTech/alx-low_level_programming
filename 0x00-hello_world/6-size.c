#include <stdio.h>

/**
 * main - Entry point
 * Return: return value (0)
 */

int main(void)
{
	char ch;

	int in;

	long int lg;

	long long ll;

	float ft;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of a int: %d byte(s)\n", sizeof(in));
	printf("Size of a long int: %d byte(s)\n", sizeof(lg));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of a float: %d byte(s)\n", sizeof(ft));
	return (0);
}
