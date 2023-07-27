#include "main.h"
/**
*string_toupper - changes strings to upper case
*
*
*Return: 0 always
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 'a' + 'A';
	}
	ptr++;
	}
	return (str);
}
