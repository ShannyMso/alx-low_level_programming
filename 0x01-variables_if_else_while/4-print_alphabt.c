#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 on success
 */
int Main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

		ch++;
	}

	putchar('\n');

	return (0);
}
