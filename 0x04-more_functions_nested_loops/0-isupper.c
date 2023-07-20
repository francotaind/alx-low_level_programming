#include "main.h"
/**
*_isupper- check if upper
*int _isupper(int c) - checks if a character is lower or uppercase
*Description: ' checks if upper or lower case'
*Return: 0
*@c: integer
*/
int _isupper(int c)
{
	int c;

	if (c >= 65 && c >= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
