#include "main.h"

/**
 * main -> print alphabet a-z
 * Return: On success 0.
 */
void print_alphabet(void);
int main(void)
{
	char ch;

	print_alphabet();
	_putchar('\n');

	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
}
