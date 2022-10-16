#include <stdio.h>
/**
 * main - Print alphabet on a line omitting e and q 
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
		if (alpha == 'e' || alpha == 'q')
			alpha++;
	}
	putchar('\n');
	return (0);
}
