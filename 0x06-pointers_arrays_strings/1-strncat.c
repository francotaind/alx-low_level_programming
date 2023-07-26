#include "main.h"
/**
*_strncat - concatenates two strings
*
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, i = 0;
	int n;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (n != 0)
	{
	dest[i] = src[j];
	n--;
	j++;
	 

}
