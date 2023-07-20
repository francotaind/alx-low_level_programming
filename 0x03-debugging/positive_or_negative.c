#include "main.h"
/*
* void positive_or_negative(int i)
* Description: test for positve or negative
* Return: 0 always success
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
