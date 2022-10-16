#include <stdio.h>
/**
 * main -Print the alphabet in lowercase letters, except for e and q
 *
 * Retur: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	puthcar('\n');

	return (0);
}
