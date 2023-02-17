#include <stdio.h>

/**
 * main - Entry point
 * Return: return value of 0
 */

int main(void)
{
	char ya = 'a';

	while (ya <= 'z')
	{
		if (ya != 'q' &&  ya != 'e')
		{
			putchar(ya);
			ya++;
		}
	}
	putchar('\n');
	return (0);
}
