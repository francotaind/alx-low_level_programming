#include <main.h>
/**
* int _isupper(int c)
*Return: 0 
*/
int _isupper(int c)
{
	int c;

	if ((c <= 122) && (c >= 97))
	{
		return (0);
	}
	else
	{
		return (1);
	}
} 
