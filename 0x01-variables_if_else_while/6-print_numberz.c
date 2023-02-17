#include <stdio.h>

/**
 * main - Entry point
 * Return: return value 0
 */

int main(void)
{
	int j = 0;

	while (j <= 9)
	{
	putchar('0' +  j);
	j++;
	}
	putchar('\n');
	return (0);
}
