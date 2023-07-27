#include "main.h"
/**
*reverse_array -  it reverses the contents of an array
*@n: length of the array
*Return: always 0
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	int temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++, end--;
	}
}	
