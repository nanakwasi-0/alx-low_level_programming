#include "main.h"
/**
 * print_line -  function that draws a straight line in terminal
 * @n: this is a fomral parameter
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
