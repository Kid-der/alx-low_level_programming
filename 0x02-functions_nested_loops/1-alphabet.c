#include "main.h"

/**
 * main - Entry point
 * Return: Always 0(success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Print lowercase alphabet
 */
void print_alphabet(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
