#include "main.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @n: The input parameter
 * Return: 0 (Success!!)
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		_putchar(-m + 48);
		return (-m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
