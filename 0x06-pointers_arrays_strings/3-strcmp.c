#include "main.h"
/**
*_strcmp - compares strings
*@s1: string 1
*@s2: string 2
*Return: comparison
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ( s1[i] == s2[i] && s1[i])
	{
	s1++, s2++;
	}
	return (s1[i] - s2[i]);
}
