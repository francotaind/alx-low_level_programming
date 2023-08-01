#include "main.h"
/**
**_memset - fills memory of the first n bytes
*@b: constant byte
*@s: address of memory area
*Return: s
*@n: the number of memory locations to be filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
