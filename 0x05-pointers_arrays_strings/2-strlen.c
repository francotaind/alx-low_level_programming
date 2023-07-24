#include "main.h"
/**
*_strlen(char *s) - returns length of a string
*Returns: length of the string
*
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{	length++;
	}
	return (length);

}
