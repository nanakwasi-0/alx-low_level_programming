#include "main.h"
/**
 * more_numbers - a function that prints 0-14 10 times
 * Return: none
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y + '0');
		}
	}
	_putchar('\n');
}
