#include "main.h"
#include <ctype.h>
/**
*cap_string - 
*
*
*Return: always 0
*/
char *cap_string(char *str)
{
	int capitalize_next = 1;
	
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	char c = str[i];
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';'||
	c == '.'|| c == '!' || c == '?' || c == '"' || c == '(' || c == ')' ||
	c == '}' || c == '}')
	{
	capitalize_next = 1;
	}
	else
	{
	if (capitalize_next)
	{
	str[i] = toupper(c);
	capitalize_next = 0;
	}
	}
	}
	return (str);

}
