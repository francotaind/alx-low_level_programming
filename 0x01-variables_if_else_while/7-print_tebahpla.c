#include <stdio.h>
/**
 * main - entry point
 * Description: 'prints alphabets in reverse'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n > 98)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
