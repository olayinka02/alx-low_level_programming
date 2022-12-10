#include <stdio.h>

/**
*main - prints alpha in a lower case
*Return: Always 0
*/
int main(void)
{
	char lcs;

	for (lcs = 'a'; lcs <= 'z'; lcs++)
	{
		putchar(lcs);
	}
	putchar('\n');
	return (0);
}
