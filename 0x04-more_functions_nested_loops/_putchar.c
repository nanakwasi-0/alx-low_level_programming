#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to the unix stdout
 * @c: Formal parameter
 * Return: 1 (Success!) 0(Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
