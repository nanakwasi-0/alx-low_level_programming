#include "main.h"
/**
 * print_sign - This function the prints tje sign of a number
 * @n: This is the input t be checked
 * Return: 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
