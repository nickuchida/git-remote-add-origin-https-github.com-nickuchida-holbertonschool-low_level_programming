#include <stdio.h>

/**
* print_alphabet function
*
* return 0
*/
void print_alphabet(void)
{
	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return 0;
}
