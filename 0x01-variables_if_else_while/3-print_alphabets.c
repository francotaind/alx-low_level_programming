#include <stdio.h>
/**
 * main - entry point
 * description: 'prints both the upper and lowercase letters
 * of the alphabet'
 * Return: always 0
 */
int main(void)
{
	int m = 97;
	int n = 65;

	while (m <= 122)
	{
		putchar(m);
		m++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
