#include "main.h"
/**
*_puts - prints a string
*Description: puts out a string
*Return: always 0
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

