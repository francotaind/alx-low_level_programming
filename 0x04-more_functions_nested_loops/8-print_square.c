#include "main.h"
/**
*print_square - Prints n squares according to n number of times
*Return: always 0 success
*@size: The number of squares/number of times
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
