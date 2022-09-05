#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: number of arguments
 * @av: array of strings (arguments)
 * Return: 0 - code success
 */

int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		(void) ac;
		printf("%s\n", av[i]);
	}
	return (0);
}
