#include "main.h"
/**
 * _islower - Function that check for lower case letter
 * @c: This parameter is the position of a char
 * Return: 1 or 0 (Success!!)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
