#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char al = 'a';
char au = 'A';
for (al = 'a'; al <= 'z'; al++)
{
	putchar(al);
}
for (au = 'A'; au <= 'Z'; au++)
{
	putchar(au);
}
putchar('\n');
return (0);
}
