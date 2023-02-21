#include "main.h"



/**
 * main - check the code
 * Return: always 0
 */



int main(void)
{

	char c[] = "_putchar";
	int i;
	int y = strlen(c) - 1;

	for (i = 0; i <= y; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);

}
