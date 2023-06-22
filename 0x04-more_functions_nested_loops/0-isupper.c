#include "main.h"
/**
 * _isupper - a function to check for uppercase characters.
 * @c: this is the formal parameter.
 * Return: 1 on success and 0 on failure
 */
int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
