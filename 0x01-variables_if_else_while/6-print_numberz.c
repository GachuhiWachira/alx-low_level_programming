#include <stdio.h>
/**
 * main - print numbers of base 10 starting from 0 using putchar only twice and to print to the console
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
