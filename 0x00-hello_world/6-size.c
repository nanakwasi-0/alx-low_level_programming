#include <stdio.h>
/**
 * main - A program that prints th sizes of all datatypes
 * Return: 0
 */
int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	return (0);
}
