#include <stdio.h>

/**
 * main - Entry point
 * Return: return value of 0
 */

int main(void)
{
	int cha = 'a';

	while (cha <= 'z')
	{
	if (cha != 'q' && cha != 'e')
	{
	putchar(cha);
	cha++;
	}
	}
	putchar('\n');
	return (0);
}
