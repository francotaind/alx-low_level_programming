#include "main.h"
/**
*print_most_numbers - prints 0-9 without 2 and 4
*Description: print 0-9 excluding 2 and 4
*Return: always 0 success
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar('0' + i);
	}
	}
	_putchar('\n');
}

