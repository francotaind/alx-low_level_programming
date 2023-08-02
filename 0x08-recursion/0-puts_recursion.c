#include "main.h"
/**
*_puts_recursion - prints a string
*Return:
*@str: the pointer to the string
*/
void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
	_putchar('\n');
	return;
	}
	else
	_putchar(*str);
	_puts_recursion(str + 1);
}
