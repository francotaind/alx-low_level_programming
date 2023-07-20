#include "main.h"
/*
*print_square - print a square
*Return: always 0 success
*Description: prints a square on the terminal
*/
void print_square(int size)
{
	int x, y;
	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
