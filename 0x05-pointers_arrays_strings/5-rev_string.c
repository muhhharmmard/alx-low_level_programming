#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: no return
 */
void rev_string(char *s)
{
	int i;
	char a;

	for (i = 0; i < _strlen(s) / 2; i++)
	{
		a = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = a;
	}
}
