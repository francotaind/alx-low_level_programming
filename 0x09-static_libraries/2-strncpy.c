#include "main.h"
/**
*_strncpy - copies a string
*@dest: destination of the string where it is copied to
*@src: source where string is copied from
*@n: index value of dest
*Return: always 0
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
	{
	return (dest);
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
