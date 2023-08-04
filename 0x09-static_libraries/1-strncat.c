#include "main.h"
/**
*_strncat - concatenates two strings
*@src: the source string
*@dest: the destination string
*@n: the number of index space
*Return: dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++, j++;
	}
	dest[i] = '\0';
	return (dest);
}
