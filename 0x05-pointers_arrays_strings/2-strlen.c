#include "main.h"
/**
*_strlen - returns length of a string
*Returns: length of the string
*@s: the name of the string
*Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{	length++;
	}
	return (length);

}
