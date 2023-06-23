#include "main.h"
/**
 * print_most_numbers - A function that print most numbers between 0-9
 * Return: 0 (Success!)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
}
