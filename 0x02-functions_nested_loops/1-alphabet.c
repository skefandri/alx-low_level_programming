#include "main.h"

/**
 * print_alphabet - is function that print the character lower
 * write is functions system call that print the character
 */

void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(STDOUT_FILENO, &c, 1);
		c++;
	}
}
