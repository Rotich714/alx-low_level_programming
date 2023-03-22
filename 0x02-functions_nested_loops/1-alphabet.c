#include "main.h"
/**
 * main - Entry point
 * Return: 0
*/

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints alphabets in lowercase using _putchar
 * Return: 0
 */

	void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
