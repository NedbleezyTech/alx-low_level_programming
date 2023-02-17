#include <stdio.h>

/**
 * main - Entry point
 * Return: return value of 0
 */

int main(void)
{
	for (int ya = 'a'; ya <= 'z'; ya++)
	{
	if (ya != 'q' && ya != 'e')
	{
	putchar(ya);
	}
	}
	putchar('\n');
	return (0);
}
