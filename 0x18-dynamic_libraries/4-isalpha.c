#include "main.h"
/**
 * _isalpha - Check whether parameter is alphabet
 * @c: The input paramter or formal parameter
 * Return: 1 or 0(Success!!)
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
}
