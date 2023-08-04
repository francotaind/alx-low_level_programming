include "main.h"
/**
 * _isalpha - shows if input is a letter else shows 0
 * @c: the characer is ASCII code
 * Return: 1 for letters. 0 for the rest
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
        return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
