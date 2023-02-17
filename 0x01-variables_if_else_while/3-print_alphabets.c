#include <stdio.h>

/**
 * main - Entry point
 * Return: return value (0)
 */

int main(void)
{
	int za = 'a';
	int ta = 'A';

	while (za <= 'z')
	{
	putchar(za);
	za++;
	}
	while (ta <= 'Z')
	{
	putchar(ta);
	ta++;
	}
	putchar('\n');
	return (0);
}
