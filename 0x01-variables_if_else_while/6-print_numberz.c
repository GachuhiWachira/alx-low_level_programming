#include <stdio.h>
/**
 * main - Print all numbers of base 10, starting from 0
 * You aren't allowed to use any variable of type char
 * you can only use 'putchar' to print to console
 * you can only use 'putchar' twice
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++);
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
