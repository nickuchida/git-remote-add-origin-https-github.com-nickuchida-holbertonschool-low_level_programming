#include <stdio.h>
#include <holberton.h>

/**
* print_alphabet function
*
* return void
*/
void print_alphabet(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return 0;
}
