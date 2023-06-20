#include <unistd.h>
/**
 * _putchar - A functions that printsto stdout
 * @c: character to be printed.
 * Return: write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 * Return: 0(Success!!)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');

	return (0);
}
