#include <stdio.h>
/**
 * main - Entry
 *
 * Prints the alphabet
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
	putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

