#include <stdio.h>
/**
*swap_int - waps values of two integers
*@b: integer to swap
*@a: integer to swap
*Return: 0 always
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;

	*a = *b;
	*b = m;
}
