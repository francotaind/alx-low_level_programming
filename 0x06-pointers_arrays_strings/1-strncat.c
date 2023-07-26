#include "main.h"
/**
*_strncat - concatenates two strings
*
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
