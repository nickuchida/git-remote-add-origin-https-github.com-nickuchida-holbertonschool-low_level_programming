#include <stdio.h>

/**
 * function prototypes
 *
 * return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char c;
	for(c = 'a'; c<= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return 0;
}
