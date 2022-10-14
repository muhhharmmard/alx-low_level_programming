#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
		continue;
		}
		else
		{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n';)
	return (0);
	}
}
