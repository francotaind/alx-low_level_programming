#include <stdio.h>
/**
*swap_int - waps values of two integers
*@n: integer
*Return: 0 always
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;

	*a = *b;
	*b = m;
}
