#include <stdio.h>

/**
 * main - prints all alphabeth in lower case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++);
	{
		putchar("%c ", ch );
	}
		
	putchar('\n');

	return (0);
}
