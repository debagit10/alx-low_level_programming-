#include "main.h"

/**
* print_numbers - A function that prints numbers from 0-9
* Return: Always 0
*/
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
