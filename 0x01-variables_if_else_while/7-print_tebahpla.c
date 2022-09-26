#include <stdio.h>

/** Program to print alphabet in reverse order */
int main(void) /*Printing alphabet in reverse */
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
